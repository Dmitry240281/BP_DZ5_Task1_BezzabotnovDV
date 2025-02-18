// Задача 1. Математические функции

#include <iostream>
#include <cmath>
#include "functions.h"


int main() 
{
	setlocale(LC_ALL, "rus");
	double A;
	double B = 0;
	std::cout << "Введите первое число: "; std::cin >> A;
	while (B == 0) {
		std::cout << "Введите второе число: "; std::cin >> B;
		if (B == 0) std::cout << "Введите число не равное НУЛЮ." << std::endl;
		else break;
	}
	int x = 0;
	while (x != 6) {
		std::cout << "Выберите операцию (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень, 6 - выход): ";
		std::cin >> x;
		switch (x)
		{
		case 1: std::cout << "Сумма: " << sum(A, B) << std::endl;
			break;
		case 2: std::cout << "Вычитание: " << subtraction(A, B) << std::endl;
			break;
		case 3: std::cout << "Умножение: " << multiplication(A, B) << std::endl;
			break;
		case 4: std::cout << "Деление: " << division(A, B) << std::endl;
			break;
		case 5: std::cout << "Возведение А в степень В: " << power(A, B) << std::endl;
			break;
		default: break;
		}
	}

	return EXIT_SUCCESS;
}