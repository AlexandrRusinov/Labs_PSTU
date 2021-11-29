#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int n;
    int sum = 0;
    cin >> n;
    if (n <= 0)
    {
        cout << "Нужно вводить только натуральные числа" << endl;
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            sum += i;
        }
        cout << sum << endl;
        
    }
    return 0;
}
