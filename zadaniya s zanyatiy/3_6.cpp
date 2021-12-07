#include <iostream>
using namespace std;

int main()
{
    int a[5], min, max;
    cin >> a[0];
    min = max = a[0];
    for (int i = 1; i < 5; i++)
    {
        cin >> a[i];
        if (min > a[i]) { min = a[i] };
        if (max < a[i]) { max = a[i] };
    }
    cout << "max is: " << max << " " << "min is: " << min;
}
