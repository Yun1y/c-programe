#include <iostream>
using namespace std;

//����Ĭ�ϲ���
//��������Լ��������ݣ������Լ������ݣ����û�У�����Ĭ��ֵ
int func01(int a, int b = 20, int c = 30) {
	return a + b + c;
}
//ע������
/*1.���ĳ��λ���Ѿ�����Ĭ�ϲ�������ô�����λ�����󣬴����Ҷ�������Ĭ��ֵ*/
//int func(int a, int b = 20, int c = 30) {
//
//}
//2.�������������Ĭ�ϲ���������ʵ�ֲ�����Ĭ�ϲ���
//������ʵ��ֻ����һ��Ĭ�ϲ���
int func02(int a = 10, int b = 10);
int func02(int a, int b) {
	return a + b;
}
int main1() {
	cout << func01(10, 30) << endl;
	system("pause");
	return 0;
}