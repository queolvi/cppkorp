struct rational {
    long long numerator;   // Числитель
    long long denominator; // Знаменатель
};

rational foo(const rational& a, const rational& b) {
    long long num1 = a.numerator;
    long long den1 = a.denominator;
    long long num2 = b.numerator;
    long long den2 = b.denominator;

    // Вычисление нового числителя
    long long new_numerator = (num1 * den2) + (num2 * den1);
    
    // Вычисление нового знаменателя
    long long new_denominator = den1 * den2;

    return {new_numerator, new_denominator}; // Возвращаем новый рациональный номер
}

