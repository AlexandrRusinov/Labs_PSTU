#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int n;
    int spaces = n / 2;
    int stars = 1;
    cin >> n;



    for (int i = 1; i <= (n + 1) / 2; i++)
    {
        for (int j = 1; j <= spaces; j++)
        {
            cout << " ";
        }
        spaces--;
        for (int j = 1; j <= stars; j++)
        {
            cout << "*";
        }
        stars += 2;
        cout << endl;
    }
    return 0;
}
