#include<iostream>

using std::cout;
using std::cin;
using std::cerr;
using std::endl;

#define tab "\t"

void main() 
{
	setlocale(LC_ALL, "");
	const int SIZE = 10;
	int arr[SIZE];
	int numbers_of_repeat = 0;
	cout << "Повторяющиеся значения: ";
	for (int i =0; i <SIZE; i++) 
	{
		bool unique;
		do 
		{
			unique = true;
			arr[i] = rand() % 7;
			for (int j = 0; j < i; j++) 
			{
			if(arr[i] == arr[j])
			{
				numbers_of_repeat++;
				cout << arr[i] << tab;
			}
			}
		} while (!unique);
	}
	cout << endl;
	cout << "Количество повторений: " << numbers_of_repeat;
	cout << endl;
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
	cout << (int)1.125 % 2;

}