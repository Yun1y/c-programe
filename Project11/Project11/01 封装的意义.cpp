#include <iostream>
using namespace std;

//Բ����
const double PI = 3.14;
//���һ��Բ��
//Բ���ܳ��Ĺ�ʽ��2 * PI * �뾶

//class�������һ���࣬���������ž����������
class Circle {
	//����Ȩ��
	//����Ȩ��
public:
	//����
	// �뾶
	int m_r;
	//��Ϊ
	//��ȡԲ���ܳ�
	double calculateZC() {
		return 2 * PI * m_r;
	}
};
int main1() {
	//ͨ��Բ�� ���������Բ������
	Circle circle;
	//��Բ��������Ը�ֵ
	circle.m_r = 10;
	cout << "Բ���ܳ�Ϊ��" << circle.calculateZC() << endl;
	system("pause");
	return 0;
}