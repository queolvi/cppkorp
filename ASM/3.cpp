long long foo(long long rdi) {
    long long result = 0;
    long long value = rdi;

    if (value + 9 <= 18) {
        return 0; // Если value + 9 меньше или равно 18, возвращаем 0
    } else {
        result = 1; // Иначе, начинаем с 1
    }

    while (value != 0) {
        long long temp = value;
        const long long multiplier = 7378697629483820647LL;

        // Выполняем умножение и арифметические операции
        temp *= multiplier;
        temp >>= 2; // sar rdx, 2
        long long sign = value >> 63; // Получаем знак value
        temp -= sign; // temp = temp - sign
        temp = (temp << 2) + temp; // temp = (temp << 2) + temp = temp * 5
        temp -= value; // temp = temp - value

        result *= temp; // result = result * temp
        value = (value * multiplier) >> 2; // Умножаем value и сдвигаем вправо на 2
    }

    return result;
}

