#include<iostream>

using namespace std;
using std::cin;
using std::cout;
using std::endl;

//#define DEC_2_BIN
#define DEC_2_HEX
#define tab "\t"

void main()
{
	setlocale(LC_ALL, "");
	int decimal; 
	cout << "Введите десятичное число: "; cin >> decimal; 
#ifdef DEC_2_BIN
	const int MAX_CAPACITY = 32; 
	bool binary[MAX_CAPACITY]{};
	int i = 0;
	//for (; decimal > 0; i++) 
	//{
	//	binary[i] = decimal % 2;	//Записываем младший разряд числа в массив
	//	decimal /= 2;				//Убираем младший довоичный разряд из десятичного числа
	//}
	for (; decimal; decimal /= 2)binary[i++] = decimal % 2;

	// Для получениея конечного результата нужно переписать остатки от деления в обратном порядке,
	// Начиная с последнего результата от деления: 
	for (--i; i >= 0; i--)
	{
		cout << binary[i];
	}
	cout << endl;
#endif // DEC_2_BIN
	
	//setlocale(LC_ALL, "C");
	//for (int i = 0; i <= 256; i++) {
	//	cout << char(i) << " " << i;
	//	if (i % 16 == 0)cout << endl;
	//}

#ifdef DEC_2_HEX
	const int MAX_HEX_CAPACITY = 8;
	char hex[MAX_HEX_CAPACITY] = {};
	int i = 0;
	for (; decimal; i++) 
	{
		hex[i] = decimal % 16;
		decimal /= 16;
	}

	for (--i; i >= 0; i--) {
		cout << (char)(hex[i] < 10 ? hex[i] + 48 : hex[i] + 55);
		/*if (hex[i] < 10)
			cout << (int)hex[i];
		else
			cout << char(hex[i] + 55);*/
	}
	cout << endl;
#endif // DEC_2_HEX
}