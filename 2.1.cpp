#include <iostream> 
using namespace std; 
int main() 
{
	setlocale(LC_ALL, "Russian"); //Функция для Русского языка при выводе в консоле
	int ga;
	float ft; //Тип данных float, т.к. будут использованы нецелые числа
	cout << "Введите число галлонов:" << endl;
	cin >> ga;
	ft = ga / 7.481;
	cout << "Количество кубических футов в галлонах=" << endl;
	cout << ft;
}





