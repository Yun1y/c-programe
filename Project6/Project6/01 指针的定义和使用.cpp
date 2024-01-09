#include <iostream>
using namespace std;

int main1() {
	int a = 10;
	int* p;
	p = &a;
	cout << "a的地址为：" << &a << endl;
	cout << "指针p为：" << p << endl;

	*p = 1000;
	cout << "a = " << a << endl;
	cout << "*p = " << *p << endl;
	system("pause");
	return 0;
}