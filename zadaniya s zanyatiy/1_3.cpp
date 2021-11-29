#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    float a, b;
    cout << "Введите числа, которые хотите поделить: " << endl;
    cin >> a >> b;
    if (b < 5)
    {
        cout << a * 3 << endl;
    }
    else if (a > 7)
    {
        cout << a + 3 << endl;
    }
    else
    {
        cout << a / 10 << endl;
    }
    return 0;
}
