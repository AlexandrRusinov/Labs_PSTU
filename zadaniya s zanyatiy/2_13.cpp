#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	float a, b, c, d, x1, x2;
	cout << "Введите коэффиценты псоледовательно " << endl;
	cin >> a >> b >> c;
	d = sqrt(b * b - 4 * a * c);
	x1 = (-b + d) / (2 * a);
	x2 = (-b - d) / (2 * a);
	cout << x1 << x2 << endl;
	return 0;
}

