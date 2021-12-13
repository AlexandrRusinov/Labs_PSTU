// f(x) = x^3 - x - 1
// f`(x) = 3x^2 - 1
// f``(x) = 6x
// [1,2]
//                               МЕТОД ПОЛОВИННОГО ДЕЛЕНИЯ
// фи(х) - х + Лямбда(x^3 - x - 1)
// -1/r < Л < 0, если f`(x) > 0
// 0 < A < 1/r, если f`(x) < 0
// r = max(|f`(a)|, |f`(b)|)
// Л = -1/20 = - 0,05
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	float x, xPred;
	double eps = 0.000001;
	double Lambda = -0.05;
	x = 2; // можно выбрать любое х0 из [1,2] - выбранного заранее промежутка
	xPred = 0; // делаем заведово сильно меньше х, чтобы цикл праивльно сработал
	while (abs(x - xPred) > eps)
	{
		xPred = x; 
		x =  Lambda * ((pow(xPred, 3) - xPred - 1) + xPred);
	}
	cout << "Корни:" << x << ";" << xPred << endl; // xPrev для демонстрации
	
	return 0;

}
