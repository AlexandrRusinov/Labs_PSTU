#include <iostream>
using namespace std;               //сортировка ВЫБОРКОЙ в дисе подробно

int main()
{
    int n = 5;
    int min_id; // индекс минимального элемента
    int arr[5] = {5, 2, 4, 0, 6};
    int key;
    int tmp;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        min_id = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_id])
            {
                min_id = j;
            }
        }
        tmp = arr[min_id];
        arr[min_id] = arr[i];
        arr[i] = tmp;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}