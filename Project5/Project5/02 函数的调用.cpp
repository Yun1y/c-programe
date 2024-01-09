#include <iostream>
using namespace std;

int add2(int num1, int num2) {
	int sum = num1 + num2;
	return sum;
}
int main2() {
	int a = 10;
	int b = 20;

	int c = add2(a, b);
	cout << "c = " << c << endl;

	a = 100;
	b = 500;
	c = add2(a, b);
	cout << "c = " << c << endl;
	system("pause");
	return 0;
}