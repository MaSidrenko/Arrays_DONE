#include<iostream>

using std::cout;
using std::cin;
using std::endl;

#define tab "\t"

void main() 
{
	setlocale(LC_ALL, "");
	int const SIZE = 10;
	int arr[SIZE];
	//Заполнение массива уникальными случайными числами 
	for (int i = 0; i < SIZE; i++) 
	{
		bool unique;
		do {
			arr[i] = rand() % SIZE;
			unique = true; // Преположим, что сгенирировалось уникольное случайное число,
			// но это нужно проверить:
			for (int j = 0; j < i; j++) 
			{
				if (arr[i] == arr[j])
				{
					unique = false;
					break;
				}
			}
		} while (!unique);
	}

	//Вывод массива на экран: 
	for (int i = 0; i < SIZE; i++) 
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}