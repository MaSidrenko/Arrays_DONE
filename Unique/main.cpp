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
	//���������� ������� ����������� ���������� ������� 
	for (int i = 0; i < SIZE; i++) 
	{
		bool unique;
		do {
			arr[i] = rand() % SIZE;
			unique = true; // ����������, ��� ��������������� ���������� ��������� �����,
			// �� ��� ����� ���������:
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

	//����� ������� �� �����: 
	for (int i = 0; i < SIZE; i++) 
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}