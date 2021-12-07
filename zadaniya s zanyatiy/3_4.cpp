#include <iostream>
using namespace std;

int main()
{
    int a[5], max;
    cin >> a[0];
    max = a[0];
    for (int i = 1; i < 5; i++)
    {
        cin >> a[i];
        if (max < a[i])
        {
            max = a[i];
        }
    }
    cout << "max is: " << max;
}
