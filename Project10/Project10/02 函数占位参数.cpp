#include <iostream>
using namespace std;

//占位参数
//返回值类型 函数名（数据类型）
//占位参数可以有默认参数
void func11(int a, int = 10) {
	cout << "this is func" << endl;
}
int main2() {
	func11(10, 10);
	system("pause");
	return 0;
}