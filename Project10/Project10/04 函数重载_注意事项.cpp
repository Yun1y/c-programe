#include <iostream>
using namespace std;

//函数重载的注意事项
//1.引用作为重载的条件
void fun(int& a) {
	cout << "fun(int &a)的调用" << endl;
}
void fun(const int& a) {
	cout << "fun(const int& a)的调用" << endl;
}
//2.函数重载碰到默认参数
void fun2(int a, int b = 20) {
	cout << "fun2(int a, int b)调用" << endl;
}
void fun2(int a) {
	cout << "fun2(int a)调用" << endl;
}
int main() {
	//int a = 10;
	//fun(a);
	//fun2(10);碰到默认参数引起歧义，尽量避免
	system("pause");
	return 0;
}