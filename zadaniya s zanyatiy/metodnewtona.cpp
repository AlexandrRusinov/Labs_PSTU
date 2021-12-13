// f(x) = x^3 - x - 1
// f`(x) = 3x^2 - 1
// f``(x) = 6x
// [1,2]
//                               МЕТОД ПОЛОВИННОГО ДЕЛЕНИЯ (НЬЮТОНА)
// f(b) * f``(b) > 0
// 8 - 2 - 1 * 6*2 > 0 -> x0 = b;
// x = 2
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	float x,xPred;
	x = 2;
	xPred = 0;
	double eps = 0.000001;
	
	while (abs(x - xPred) > eps)
	{
		xPred = 0;
		x = xPred - ((pow(xPred, 3) - xPred - 1) / (3 * pow(xPred, 2) - 1));
	}
	cout << "Корни:" << x << ";" << xPred << endl; // xPrev для демонстрации, а так без него
	return 0;
}