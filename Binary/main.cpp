#include<iostream>

using namespace std;


void main()
{
	setlocale(LC_ALL, "");
	int n;
	cin >> n;
	int buffer;
	const int SIZE = 10;
	int arr[SIZE];
	for (; n > 0; n /= 2) {
		buffer = n % 2;
		//cout << n << "\t";
		//cout << "\t";
		//cout << buffer << "\t\n";
	int	arr[SIZE] = { buffer };
	}
	for (int i = 0; i < SIZE; i++) {
		cout << arr[i] << "\t\n";
		cout << endl;
	}
}