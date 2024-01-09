#include <iostream>
using namespace std;

int main9() {
	//整型：short (2) int (4) long (4) long long (8)
	//利用sizeof求出数据类型占用的内存空间大小
	//语法：sizeof(数据类型\变量)
	short num1 = 10;
	cout << "short占用的内存空间为：" << sizeof(num1) << endl;
	int num2 = 10;
	cout << "int占用的内存空间为：" << sizeof(num2) << endl;
	long num3 = 10;
	cout << "long占用的内存空间为：" << sizeof(num3) << endl;
	long long num4 = 10;
	cout << "long long占用的内存空间为：" << sizeof(num4) << endl;
	//整型 short < int <= long <= long long
	system("pause");
	return 0;
}