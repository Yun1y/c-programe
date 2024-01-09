#include <iostream>
using namespace std;

void test01() {
	cout << "This is test01" << endl;
}
void test02(int a) {
	cout << "This is test02 a = " << a << endl;
}
int test03() {
	cout << "This is test03" << endl;
	return 1000;
}
int test04(int a) {
	cout << "This is test04 a = " << a << endl;
	return a;
}
int main4() {
	test01();
	test02(100);
	int num1 = test03();
	cout << "num1 = " << num1 << endl;
	int num2 = test04(10000);
	cout << "num2 = " << num2 << endl;
	system("pause");
	return 0;
}