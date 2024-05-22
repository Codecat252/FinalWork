#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int a1;
	int b;
	int c;
	int d;
	int max = 0;
	printf("Введите 4 числа: "); //ввод данных
	scanf("%d%d%d%d", &a1, &b, &c, &d);
	if (a1 > max && a1 % 2 == 0)
		max = a1;
	if (b > max && b % 2 == 0)
		max = b;
	if (c > max && c % 2 == 0)
		max = c;
	if (d > max && d % 2 == 0)
		max = d;
	if (max < 0) {
		printf("Положительных чисел нет");
	}
	else {
		printf("%d", max);
	}
	return 0;
}