#include <iostream>
using namespace std;

//ջ��ע������ -- ��Ҫ���ؾֲ������ĵ�ַ
//ջ���������ɱ����������ٺ��ͷ�
int* func2() {
	int a = 10;//�ֲ����� �����ջ����ջ���������ں���ִ����֮���Զ��ͷ�
	return &a;//���ؾֲ�����a�ĵ�ַ
}
int main2() {
	int* p = func2();

	cout << *p << endl;
	cout << *p << endl;//?????

	system("pause");
	return 0;
}