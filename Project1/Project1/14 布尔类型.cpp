#include <iostream>
using namespace std;

int main14() {
	bool flag = true;
	cout << flag << endl;
	flag = false;
	cout << flag << endl;
	cout << "bool类型所占的内存空间：" << sizeof(flag) << endl;
	system("pause");
	return 0;
}