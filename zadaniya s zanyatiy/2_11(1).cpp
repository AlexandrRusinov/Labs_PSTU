#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int n, i, t;
	bool flag = false;
	cout << "Введите длину последовательности: " << endl;
	cin >> n;
	i = 1;

	while (i <= n && !flag)
	{
		cout << "Введите число: " << endl;
		cin >> t;
		if (t == 0) { i++; }
		else
		{
			if (t > 0) { flag = true; }
		}
	}
	return 0;
}
if (flag == 1)
{
	cout << "Сначала ввели положительное число" << endl;
}
else
{
	cout << "Сначала ввели отрицательное число" << endl;
}
cout << endl;
