#include <iostream>
using namespace std;

void showValue(const int &val) {
	//val = 1000;
	cout << "val = " << val << endl;
}
int main() {
	//常量引用
	//使用场景，用来修饰形参，防止误操作
	//int a = 10;
	//加上const后，编译器将代码修改为int temp = 10; const int &ref = temp;
	//const int& ref = 10;//引用必须引一块合法的内存空间
//	ref = 20; 加上const后变为只读不可以修改
	int a = 100;
	showValue(a);
	cout << "a = " << a << endl;
	system("pause");
	return 0;
}