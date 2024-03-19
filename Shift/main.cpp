#include <iostream>

using namespace std;

#define tab "\t"

void main()
{
	setlocale(LC_ALL, "");
	const int SIZE = 10;
	//cout << int() << endl;
	//int() - Значение по умолчаниюдля типа 'int'
	//double() - Значение по умолчаниюдля типа 'double'
	int arr[SIZE] = { 0, 1, 1, 2, 3, 5, 8 ,13, 21, 34 };

	//Вывод исходного массива на экран:
	for (int i = 0; i < SIZE; i++) {
		cout << arr[i] << tab;
	}
	cout << endl;

	//Cдвиг массива:
	int number_of_shifts;
	cout << "Введите количество сдвигов: ";cin >> number_of_shifts;
	for (int i = 0; i < number_of_shifts; i++) {
		int buffer = arr[0];
		for (int i = 1; i < SIZE; i++) {
			arr[i - 1] = arr[i];
		}
		arr[SIZE - 1] = buffer;
	}
	
	//Вывод сдвинутого массива на экран:
	
	for (int i = 0; i < SIZE; i++) {
		cout << arr[i] << tab;
	}
	cout << endl;
}
