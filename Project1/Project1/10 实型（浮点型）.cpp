#include <iostream>
using namespace std;
int main10() {
	//Ĭ�������,���һ��С��������ʾ��6λ��Ч����
	float f1 = 3.1415926f;
	cout << "f1 = " << f1 << endl;
	double d1 = 3.1415926;
	cout << "d1 = " << d1 << endl;
	//float, doubleռ�õĿռ��ڴ�
	cout << "floatռ�õĿռ��ڴ�Ϊ��" << sizeof(float) << endl;
	cout << "doubleռ�õĿռ��ڴ�Ϊ��" << sizeof(double) << endl;
	//��ѧ������
	float f2 = 3e2; // 3 * 10 ^ 2
	float f3 = 3e-2; // 3 * 0.1 ^ 2
	cout << "f2 = " << f2 << endl;
	cout << "f3 = " << f3 << endl;
	system("pause");
	return 0;
}