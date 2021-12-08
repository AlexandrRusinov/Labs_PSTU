#include <iostream>
using namespace std;
int main()
{
	int n;
	int k=0;
	cin >> n;
	int nn = n;
	while (n != 0)
	{
		k += 1;
		n = n / 10;

	}
	for (int i = k; i!=0; i--)
	{
		k--;
		cout << nn % 10;
		nn = nn / 10;
	}
}
