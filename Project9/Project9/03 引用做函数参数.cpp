#include <iostream>
using namespace std;

//交换函数
//1.值传递
void mySwap01(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
/*	cout << "a = " << a << endl;
	cout << "b = " << b << endl;*/
}
//2.地址传递
void mySwap02(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}
//3.引用传递
void mySwap03(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}
int main3() {
	int a = 10;
	int b = 20;
	//mySwap01(a, b);
	//mySwap02(&a, &b);
	mySwap03(a, b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	system("pause");
	return 0;
}