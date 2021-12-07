#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int n, z, k;
	cin >> n >> z;
	bool flag = false;
	while (n != 0 && !flag)
	{
		k = n % 10;
		if (k == z)
		{
			flag = true;
			cout << "Число присутствует в последовательности";
		}
		else
		{
			n = n / 10;
		}
	}
	if (n == 0)
	{
		cout << "Число не присутствует в последовательности" << endl;
	}
	return 0;
}
