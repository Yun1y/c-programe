//#include <iostream>
//using namespace std;
//
////���麯���ͳ�����
//class Base {
//public:
//	//���麯��
//	//ֻҪ��һ�����麯����������Ϊ������
//	//�������ص㣺
//	//1���޷�ʵ�л�����
//	//2������������࣬������д�����еĴ��麯��������Ҳ���ڳ�����
//	virtual void func() = 0;
//};
//class Son :public Base {
//public:
//	void func() {
//		cout << "func()��������" << endl;
//	}
//};
//void test01() {
//	//Base b;//�������޷�ʵ��������
//	//new Base;//�������޷�ʵ�л�����
//	//Son s;//���������д�����еĴ��麯���������޷�ʵ�л�����
//	Base* base = new Son;
//	base->func();
//	delete base;
//}
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}