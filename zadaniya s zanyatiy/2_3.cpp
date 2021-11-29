#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int n;
    int t, sum = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        t = 1;
        for (int j = i; j <= i * 2; j++)
        {
            t *= j;
        }
        sum += t;
    }
    cout << sum << endl;
    return 0;
}