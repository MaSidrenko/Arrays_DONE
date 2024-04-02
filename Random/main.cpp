﻿#include<iostream>

using std::cin;
using std::cout;
using std::endl;

#define tab "\t"

void main() {
	setlocale(LC_ALL, "");
	const int SIZE = 5;
	int arr[SIZE];
	int minRand, maxRand;
	do {
		system("CLS");
		cout << "Введите минимальное случайное число: "; cin >> minRand;
		cout << "Ввдеите максимальное случайное число: "; cin >> maxRand;
		if (maxRand <= minRand) {
			std::cerr << "Error 0: incorrect vaule`s" << endl;
			system("PAUSE");
		}
	} while (minRand >= maxRand);

	//Запонения массива случайными числами: 
	for (int i = 0; i < SIZE; i++) {
		arr[i] = rand() % (maxRand  - minRand) + minRand;
	}

	//Вывод массива на экран: 
	for (int i = 0; i < SIZE; i++) 
	{
		cout << arr[i] << tab;
	}
	cout << endl;
	cout << endl;
	//Сортировка массива: 
	
	for (int i = 0; i < SIZE; i++) {
	
		for (int j = i + 1; j < SIZE; j++) {
			if (arr[j] < arr[i]) 
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}

	}

	//Вывод отсортированного массива: 
	for (int i = 0; i < SIZE; i++) 
	{
		cout << arr[i] << tab;
	}
	cout << endl;

}
