//#include <iostream>
//using namespace std;
//
////���캯�����ù���
////1.����һ���࣬C++���������ÿ���඼�������3������
////Ĭ�Ϲ��죨��ʵ�֣�
////������������ʵ�֣�
////�������죨ֵ������
////2.�������д���вι��캯�����������Ͳ����ṩĬ�Ϲ��죬��Ȼ�ṩ��������
////�������д�˿������캯�����������Ͳ����ṩ������ͬ���캯����
//class Person {
//public:
//	//Person() {
//	//	cout << "PersonĬ�Ϲ��캯������" << endl;
//	//}
//	//Person(int age) {
//	//	cout << "Person�вι��캯������" << endl;
//	//	m_Age = age;
//	//}
//	Person(const Person &p) {
//		cout << "Person�������캯������" << endl;
//		m_Age = p.m_Age;
//	}
//	~Person() {
//		cout << "Person������������" << endl;
//	}
//
//	int m_Age;
//};
////void test01() {
////	Person p;
////	p.m_Age = 18;
////
////	Person p2(p);
////	cout << "p2������Ϊ��" << p2.m_Age << endl;
////}
//void test02() {
//	Person p;
//	//Person p2(p);
//
//	//cout << "p2������Ϊ��" << p2.m_Age << endl;
//}
//int main() {
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}