//#include <iostream>
//using namespace std;
//
////�̳���ͬ����Ա����
//class Base {
//public:
//	Base() {
//		m_A = 100;
//	}
//	void func() {
//		cout << "Base - func()����" << endl;
//	}
//	void func(int a) {
//		cout << "Base - func()����" << endl;
//	}
//	int m_A;
//};
//class Son :public Base {
//public:
//	Son() {
//		m_A = 200;
//	}
//	void func() {
//		cout << "Son - func()����" << endl;
//	}
//	int m_A;
//};
////ͬ����Ա���Դ���
//void test01() {
//	Son s;
//	cout << "Son �� m_A = " << s.m_A << endl;
//	//���ͨ��������� ���ʵ�������ͬ����Ա����Ҫ��������
//	cout << "Base �� m_A = " << s.Base::m_A << endl;
//}
////ͬ����������
//void test02() {
//	Son s;
//	s.func();//ֱ�ӵ��ã����õ��������е�ͬ����Ա
//	//��ε��ø�����ͬ����Ա������
//	s.Base::func();
//	//��������г��ֺ͸���ͬ���ĳ�Ա����������ĳ�Ա���������ص�����������ͬ����Ա����
//	//�������ʵ����������ص�ͬ����Ա��������Ҫ��������
//	s.Base::func(100);
//}
//int main() {
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}