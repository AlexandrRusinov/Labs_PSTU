#include <iostream> 
using namespace std; 
int main() 
{
	setlocale(LC_ALL, "Russian"); //������� ��� �������� ����� ��� ������ � �������
	const int a = 10; //������ ����� ���������
	int b; //������� ������������� ���������� ��� ��������
	b = a * 2; //����������� �������� ������ ������������ ����������
	cout << a << endl;
	cout << b << endl;
	cout << --b << endl; //�������� ����������
}





