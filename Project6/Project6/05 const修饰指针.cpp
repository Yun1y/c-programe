#include <iostream>
using namespace std;

int main5() {
	int a = 10;
	int b = 20;
	//1.const����ָ�� ����ָ��
	//ָ��ָ���ֵ�����Ը��ģ�ָ���ָ������޸�
	const int* p = &a;
	//*p = 20;����
	p = &b;//��ȷ

	//2.const���γ��� ָ�볣��
	//ָ���ָ�򲻿��Ըģ�ָ��ָ���ֵ�����޸�
	int* const p2 = &a;
	*p2 = 100;//��ȷ
	//p2 = &b;����

	//3.const����ָ��ͳ���
	const int* const p3 = &a;
	//ָ���ָ���ָ��ָ���ֵ�������Ը���
	//*p = 100;
	//p = &b;����
	system("pause");
	return 0;
}