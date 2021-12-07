#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int n;
	int a = -1;
	int b = 2;
	int sum = a + b;
	cin >> n;
	for(int i=1;i<n; i++)
	{
		a = abs(a) + 2;
		b = b + 2;
		sum = sum + (a + b);
	}
	cout << sum << endl;
	return 0;
}

