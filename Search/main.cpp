#include<iostream>

using std::cout;
using std::cin;
using std::cerr;
using std::endl;

#define tab "\t"
//#define SEARCH_HW

void main() 
{
#ifdef SEARCH_HW
	setlocale(LC_ALL, "");
	const int SIZE = 10;
	int arr[SIZE];
	int numbers_of_repeat = 0;
	cout << "Повторяющиеся значения: " << endl;
	for (int i = 0; i < SIZE; i++)
	{
		bool unique;
		do
		{
			unique = true;
			arr[i] = rand() % SIZE;
			for (int j = 0; j < i; j++)
			{
				if (arr[i] == arr[j])
				{
					numbers_of_repeat++;
					cout << arr[i] << tab;
				}
			}
		} while (!unique);
	}
	cout << endl;
	cout << endl;
	cout << "Количество повторений: " << endl << numbers_of_repeat;
	cout << endl;
	cout << endl;
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
#endif // SEARCH_HW

	setlocale(LC_ALL, "");
	const int SIZE = 10;
	int arr[SIZE];
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % 8;
	}
	for (int i = 0; i < SIZE; i++) 
	{
		cout << arr[i] << tab;
	}
	cout << endl;
	cout << endl;
	//		Поиск повторений: 
	for (int i = 0; i < SIZE; i++) 
	{
		bool met_befor = false; //Предпологаем, что выбраное значение, ранее не встерчалось,
		// но это нужно проверить: 
		for (int j = 0; j < i; j++)
		{
			if (arr[i] == arr[j]) 
			{
				met_befor = true;
				break;
			}
		}
		if (met_befor)continue;		//прерывает текущую итерацию, и преходит к следующей
		int counter = 0; //Счетчик повторений
		for (int j = i + 1; j < SIZE; j++) 
		{
			if (arr[i] == arr[j])counter++;
		}
		if(counter)printf("Значение %i встерачается %i раз\n", arr[i], counter + 1);
		//if(counter)printf("Значение %i повторояется %i раз\n", arr[i], counter);
		//if (counter)cout << "Значение " << arr[i] << " повторяется " << counter << " раз" << endl;
	}
}