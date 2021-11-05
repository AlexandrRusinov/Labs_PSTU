#include <iostream> 
using namespace std; 
int main() 
{
	setlocale(LC_ALL, "Russian"); //Функция для Русского языка при выводе в консоле
	const int a = 10; //Вводим целую константу
	int b; //Создаем целочисленную переменную без значения
	b = a * 2; //Присваиваем значение пустой целочисленой переменной
	cout << a << endl;
	cout << b << endl;
	cout << --b << endl; //Операция декремента
}





