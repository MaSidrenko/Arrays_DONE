#include<iostream>

using namespace std;

//#define ARR_0
//#define ARR_1
//#define ARR_2
//#define ARR_3
//#define ARR_4
//#define ARR_5
#define ARR_6

void main() 
{
	setlocale(LC_ALL, "");
	const int SIZE = 5;
	int arr[SIZE];

#ifdef ARR_0
	for (int i = 0; i < SIZE; i++) {
		cout << "¬ведите " << i << " элемент массива: ";
		cin >> arr[i];
		cout << endl;
	}
	cout << endl;
	for (int i = 0; i < SIZE; i++) {
		cout << "Ёлемент массива " << i << " = " << arr[i] << "\n\n";
	}
#endif // ARR_0

#ifdef ARR_1
	for (int i = 0; i < SIZE; i++) {
		cout << arr[i] << "\t";
	}
#endif // ARR_1

#ifdef ARR_2
	for (int i = SIZE; i >= 0; i--) {
		cout << arr[i] << "\t";
	}
#endif // ARR_2

#ifdef ARR_3
	int sum = 0;
	for (int i = 0; i < SIZE; i++) {
		cout << "¬ведите " << i << " элемент массива: ";
		cin >> arr[i];
		cout << endl;
	}
	for (int i = 0; i < SIZE; i++) {
		sum += arr[i];
	}
	cout << sum;
#endif // ARR_3

#ifdef ARR_4
	int sum = 0;
	for (int i = 0; i < SIZE; i++) {
		cout << "¬ведите " << i << " элемент массива: ";
		cin >> arr[i];
		cout << endl;
	}
	for (int i = 0; i < SIZE; i++) {
		sum += arr[i];
	}
	int Arfm = sum / SIZE;
	cout << Arfm;
#endif // ARR_4

#ifdef ARR_5
	for (int i = 0; i < SIZE; i++) {
		cout << "¬ведите " << i << " элемент массива: ";
		cin >> arr[i];
		cout << endl;
	}
	int max = arr[0];
	for (int i = 0; i < SIZE; i++) {
		if (arr[i] < max) {
			max = arr[i];
		}
	}
	cout << max;
#endif // ARR_5

#ifdef ARR_6
	for (int i = 0; i < SIZE; i++) {
		cout << "¬ведите " << i << " элемент массива: ";
		cin >> arr[i];
		cout << endl;
	}
	int min = arr[0];
	for (int i = 0; i < SIZE; i++) {
		if (arr[i] < min) {
			min = arr[i];
		}
	}
	cout << min;
#endif // ARR_6

	
	
}

