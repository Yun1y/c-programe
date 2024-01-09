#include <iostream>
using namespace std;

int main2() {
	//1.引用必须初始化
	//2.引用在初始化后，不可以改变
	int a = 10;
	int b = 20;
//	int& c;错误，引用必须初始化
	int& c = a;//一旦初始化后，就不可以修改
//	c = b;这是赋值操作，不是修改引用

	system("pause");
	return 0;
}