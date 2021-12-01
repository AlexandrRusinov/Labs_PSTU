#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int n, t, max;

    cout << "Введите длину последовательности:" << endl;
    cin >> n;

    cout << "Введите число:" << endl;
    cin >> max;

    for (int i = 2; i <= n; i++)
    {
        cout << "Введите число:" << endl;
        cin >> t;
        if (t > max)
        {
            max = t;
        }
    }
    cout << "Max элемент: " << max << endl;
    return 0;
}

    