#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>

// Функція для обчислення найбільшого спільного дільника
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

// Функція для обчислення найменшого спільного кратного
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int n, i, num, result;

    printf("Give n \n");

    // Зчитуємо кількість чисел р
    scanf("%d", &n);


    // Зчитуємо р натуральних чисел
    printf("Give first number");
    scanf("%d", &result);

    for (i = 1; i < n; i++) {
        printf("Give %d num \n", i);
        scanf("%d", &num);
        result = lcm(result, num);
    }

    // Виводимо найменше спільне кратне
    printf("%d\n", result);

    return 0;
}

