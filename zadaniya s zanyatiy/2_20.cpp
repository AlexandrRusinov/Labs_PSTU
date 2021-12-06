#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	float n, z, a;
	int i = 1;
	bool flag = false;

	cin >> n >> z;

	while (i <= n && !flag)
	{
		a = sin(n + i / n);
		a = round(1 * 10) / 10;
		if (a == z)
		{
			flag = true;
		}
		else
		{
			i++;
		}
	}
	if (flag)
	{
		cout << "Элемент" << z << "найден. Его номер: " << i << endl;
	}
	else
	{
		cout << "Элемент не найден" << endl;
	}
	return 0;
}
