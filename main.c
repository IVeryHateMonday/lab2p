#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>

// ������� ��� ���������� ���������� �������� �������
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

// ������� ��� ���������� ���������� �������� ��������
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int n, i, num, result;

    printf("Give n \n");

    // ������� ������� ����� �
    scanf("%d", &n);


    // ������� � ����������� �����
    printf("Give first number");
    scanf("%d", &result);

    for (i = 1; i < n; i++) {
        printf("Give %d num \n", i);
        scanf("%d", &num);
        result = lcm(result, num);
    }

    // �������� �������� ������ ������
    printf("%d\n", result);

    return 0;
}

