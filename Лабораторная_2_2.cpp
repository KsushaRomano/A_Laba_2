﻿// Лабораторная_2_2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
using namespace std;

#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");
	double a, b, c;
	cout << "Введите значения a, b, c: ";
	cin >> a >> b >> c;
	if ((2 < a) & (a < 5)) {
		cout << "Число " << a << " попадает в диапозон (2, 5)" << endl;
		;
	}
	if ((2 < b) & (b < 5)) {
		cout << "Число " << b << " попадает в диапозон (2, 5)" << endl;
		;
	}
	if ((2 < c) & (c < 5)) {
		cout << "Число " << c << " попадает в диапозон (2, 5)" << endl;
		;
	}
	if ((a == 2) || (a == 5)) {
		cout << "Число " << a << " лежит на границе диапозона (2, 5)" << endl;
		;
	}
	if ((b == 2) || (b == 5)) {
		cout << "Число " << b << " лежит на границе диапозона (2, 5)" << endl;
		;
	}
	if ((c == 2) || (c == 5)) {
		cout << "Число " << c << " лежит на границе диапозона (2, 5)" << endl;
		;
	}
	if ((a < 2) || (a > 5)) {
		cout << "Число " << a << " лежит вне диапазона (2, 5)" << endl;
		;
	}
	if ((b < 2) || (b > 5)) {
		cout << "Число " << b << " лежит вне диапазона (2, 5)" << endl;
		;
	}
	if ((c < 2) || (c > 5)) {
		cout << "Число " << c << " лежит вне диапазона (2, 5)" << endl;
		;
	}
}