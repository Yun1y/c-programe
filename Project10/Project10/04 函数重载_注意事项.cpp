#include <iostream>
using namespace std;

//�������ص�ע������
//1.������Ϊ���ص�����
void fun(int& a) {
	cout << "fun(int &a)�ĵ���" << endl;
}
void fun(const int& a) {
	cout << "fun(const int& a)�ĵ���" << endl;
}
//2.������������Ĭ�ϲ���
void fun2(int a, int b = 20) {
	cout << "fun2(int a, int b)����" << endl;
}
void fun2(int a) {
	cout << "fun2(int a)����" << endl;
}
int main() {
	//int a = 10;
	//fun(a);
	//fun2(10);����Ĭ�ϲ����������壬��������
	system("pause");
	return 0;
}