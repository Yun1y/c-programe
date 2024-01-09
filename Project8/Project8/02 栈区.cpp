#include <iostream>
using namespace std;

//栈区注意事项 -- 不要返回局部变量的地址
//栈区的数据由编译器管理开辟和释放
int* func2() {
	int a = 10;//局部变量 存放在栈区，栈区的数据在函数执行完之后自动释放
	return &a;//返回局部变量a的地址
}
int main2() {
	int* p = func2();

	cout << *p << endl;
	cout << *p << endl;//?????

	system("pause");
	return 0;
}