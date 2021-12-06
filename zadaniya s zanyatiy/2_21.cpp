#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int tmp, next;
	bool flag = false;
	cin >> tmp;

	while (tmp != 0)
	{
		cin >> next;
		if (next != 0 && tmp > next) { flag = false; }
		tmp = next;
	}
	if (flag = 1)
	{
		cout << "Последовательность упорядочена по возрастанию" << endl;
	}
	else
	{
		cout << "Последовательность не упорядочена по возрастанию" << endl;
	}
	return 0;
}