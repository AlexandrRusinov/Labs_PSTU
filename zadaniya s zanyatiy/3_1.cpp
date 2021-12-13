#include <iostream>
using namespace std;               //сортировка ВСТАВКОЙ в дисе подробно

int main()
{
    int n = 5;
    int arr[5];
    int key;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    for (int j = 1; j < n; j++)
    {
        key = arr[j];
        int i = j - 1;
        while (i >= 0 && arr[i] > key)
        {
            arr[i + 1] = arr[i];
            i--; 
        }
        arr[i + 1] = key;
    }
    
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
    cout << endl;
    return 0;
}
