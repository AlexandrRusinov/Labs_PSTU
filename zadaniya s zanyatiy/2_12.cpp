#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int n, t, min, max;
	cout << "Введите длину последовательности: " << endl;
	cin >> n;
	cout << "Введите первое число: " << endl;
	cin >> t;
	max = min = t;
	for (int i = 1; i <= n; i++)
	{
		cout << "Введите число: " << endl;
		cin >> t;
		if (t > max)
		{
			max = t;
		}
		else if (t < min)
		{
			min = t;
		}
	}
	cout << (max + min) << endl;
	return 0;
}
