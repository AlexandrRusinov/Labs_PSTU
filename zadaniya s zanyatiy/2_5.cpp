﻿#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int n;
    cin >> n;
    int spaces = n - 1;
    int stars = 1;
   


    for (int i = 1; i <= n; i++)
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
        stars +=1;
        cout << endl;
    }
    return 0;
}