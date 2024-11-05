#include <iostream>
#include <thread>
#include <mutex>
#include <condition_variable>

#define BUFFER_SIZE 10

int buffer[BUFFER_SIZE]; // Кольцевой буфер
int head = 0; // Индекс следующего элемента для записи
int tail = 0; // Индекс следующего элемента для чтения

std::mutex mutex; // Мьютекс для синхронизации доступа к буферу
std::condition_variable cv; // Условная переменная для сигнализации о доступности данных

void p0() {
  std::cout << "Процесс p0: ";
  for (int i = 0; i < 5; ++i) {
    std::unique_lock<std::mutex> lock(mutex); // Блокировка мьютекса
    while (((head + 1) % BUFFER_SIZE) == tail) { // Проверка на переполнение
      cv.wait(lock); 
    }
    buffer[head] = i; // Запись в буфер
    head = (head + 1) % BUFFER_SIZE;
    cv.notify_one(); // Сигнализация о доступности данных
  }
}

void p1() {
  std::cout << "Процесс p1: ";
  for (int i = 0; i < 5; ++i) {
    std::unique_lock<std::mutex> lock(mutex); // Блокировка мьютекса
    while (head == tail) { // Проверка на пустоту
      cv.wait(lock);
    }
    std::cout << "Прочитал " << buffer[tail] << std::endl; // Чтение из буфера
    tail = (tail + 1) % BUFFER_SIZE;
    cv.notify_one(); // Сигнализация о доступности места
  }
}

void p2() {
  std::cout << "Процесс p2: ";
  for (int i = 0; i < 5; ++i) {
    std::unique_lock<std::mutex> lock(mutex); // Блокировка мьютекса
    while (head == tail) { // Проверка на пустоту
      cv.wait(lock);
    }
    std::cout << "Прочитал " << buffer[tail] << std::endl; // Чтение из буфера
    tail = (tail + 1) % BUFFER_SIZE;
    cv.notify_one(); // Сигнализация о доступности места
  }
}

int main() {
  std::thread t0(p0);
  std::thread t1(p1);
  std::thread t2(p2);

  t0.join();
  t1.join();
  t2.join();

  return 0;
}