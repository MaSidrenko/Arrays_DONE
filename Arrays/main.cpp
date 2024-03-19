#include<iostream>

using namespace std;

#define tab "\t"

void main() {
	setlocale(LC_ALL, "");
	const int SIZE = 5;
	int arr[SIZE];

	//Ввод элементов массива с клавиатуры
	cout << "Введите элементы массива: ";
		for (int i = 0; i < SIZE; i++) 
		{
		cin >> arr[i];
		}
	cout << endl;

		for (int i = 0; i < SIZE; i++) {
		cout << "Элемент массива " << i << " = " << arr[i] << "\n\n";
	}

	//Вывод элементов массива в прямом порядке
	cout << "Вывод элементов массива в прямом порядке: ";
		for (int i = 0; i < SIZE; i++) {
		cout << arr[i] << tab;
	}
	cout << "\n\n";

	//Вывод элементов массива в обратном порядке
	cout << "Вывод элементов массива в обратном порядке: ";
		for (int i = SIZE - 1; i >= 0; i--) {
		cout << arr[i] << tab;
	}
	cout << "\n\n";

	//Сумма элементов элементов массива и Среднее-арифметическое элементов массива
	int sum = 0;
		for (int i = 0; i < SIZE; i++) {
		sum += arr[i];
	}
	cout << "Сумма элементов массива: " << sum << "\n\n";
	cout << "Среднее-арифметическое: " << (double)sum / SIZE << "\n\n";

	//Максимальное и минимальное значение элемента массива
	int max = arr[0];
	int min = arr[0];
		for (int i = 0; i < SIZE; i++) {
			if (arr[i] > max) {
				max = arr[i];
			}
			if (arr[i] < min) {
				min = arr[i];
			}
		}
	cout << "Максимальное значение элемента массива: " << max << "\n\n";
	cout << "Минимальное значение жлемента массива: " << min;

}
