#include <iostream>
using namespace std;

//常量定义的方式
//1、#define 宏常量
//2、const修饰的变量

//1、#define 宏常量
#define Day 7

int main4() {
	cout << "一周总共有：" << Day << "天" << endl;
	const int month = 12;
	cout << "一年总共有：" << month << "个月" << endl;
	system("pause");
	return 0;
}