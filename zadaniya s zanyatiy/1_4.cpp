#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int a, b;
    cout << "Введите числа, которые хотите посчитать: " << endl;
    cin >> a >> b;
    if (a <= 0)
    {
        cout << "Нужно вводить только натуральные числа" << endl;
    }
    else if (b <= 0)
    {
        cout << "Нужно вводить только натуральные числа" << endl;
    }
    else
    {
        cout << a + b << endl;
    }
    return 0;
}
