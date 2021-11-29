#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int n;
    int pr = 1;
    cin >> n;
    if (n <= 0)
    {
        cout << "Нужно вводить только натуральные числа" << endl;
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            pr *= i;
        }
        cout << pr << endl;

    }
    return 0;
}

