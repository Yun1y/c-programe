#include <iostream>
using namespace std;

int main5() {
	int a = 10;
	int b = 20;
	//1.const修饰指针 常量指针
	//指针指向的值不可以更改，指针的指向可以修改
	const int* p = &a;
	//*p = 20;错误
	p = &b;//正确

	//2.const修饰常量 指针常量
	//指针的指向不可以改，指针指向的值可以修改
	int* const p2 = &a;
	*p2 = 100;//正确
	//p2 = &b;错误

	//3.const修饰指针和常量
	const int* const p3 = &a;
	//指针的指向和指针指向的值都不可以更改
	//*p = 100;
	//p = &b;错误
	system("pause");
	return 0;
}