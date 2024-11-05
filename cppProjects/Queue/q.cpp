#include <iostream>
#include <thread>
#include <mutex>

std::mutex mutex; // Мьютекс

int counter = 0; // Общий ресурс

void p0() {
  std::cout << "Процесс p0: ";
  for (int i = 0; i < 5; ++i) {
    std::lock_guard<std::mutex> lock(mutex); // Блокировка мьютекса
    std::cout << "Изменил счетчик: " << ++counter << std::endl;
  }
}

void p1() {
  std::cout << "Процесс p1: ";
  for (int i = 0; i < 5; ++i) {
    std::lock_guard<std::mutex> lock(mutex); // Блокировка мьютекса
    std::cout << "Прочитал счетчик: " << counter << std::endl; 
  }
}

void p2() {
  std::cout << "Процесс p2: ";
  for (int i = 0; i < 5; ++i) {
    std::lock_guard<std::mutex> lock(mutex); // Блокировка мьютекса
    std::cout << "Прочитал счетчик: " << counter << std::endl; 
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