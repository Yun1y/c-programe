#include <iostream>
using namespace std;

int main1() {
	int a = 10;
	int* p;
	p = &a;
	cout << "a�ĵ�ַΪ��" << &a << endl;
	cout << "ָ��pΪ��" << p << endl;

	*p = 1000;
	cout << "a = " << a << endl;
	cout << "*p = " << *p << endl;
	system("pause");
	return 0;
}