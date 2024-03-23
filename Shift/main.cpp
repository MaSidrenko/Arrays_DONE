#include <iostream>

using namespace std;

#define tab "\t"
//#define SHIFT_LEFT
#define SHIFT_RIGHT

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
#ifdef SHIFT_LEFT
		cout << "Сдвиг влево: " << endl;
		for (int i = 0; i < number_of_shifts; i++) {
			int buffer = arr[0];
			for (int i = 1; i < SIZE; i++) {
				arr[i - 1] = arr[i];
			}
			arr[SIZE - 1] = buffer;
			//Вывод сдвинутого массива на экран:
			for (int i = 0; i < SIZE; i++) {
				cout << arr[i] << tab;
			}
		cout << endl;
	}
#endif // SHIFT_LEFT

#ifdef SHIFT_RIGHT
		cout << "Сдвиг вправо: " << endl;
	for (int i = 0; i < number_of_shifts; i++) {
		int buffer = arr[SIZE - 1];
		for (int i = SIZE - 1; i > 0; i--) {
			arr[i] = arr[i - 1];
		}
		arr[0] = buffer;
	//Вывод сдвинутого массива на экран:
	for (int i = 0; i < SIZE; i++) {
		cout << arr[i] << tab;
	}
	cout << endl;
	}
#endif // SHIFT_RIGHT


	
	

}
