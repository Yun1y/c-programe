//#include <iostream>
//using namespace std;
//
////1.������Ƴ�ͻ
////2.���ض�������*this
//class Person {
//public:
//	Person(int age) {
//		//thisָ��ָ�򱻵��õĳ�Ա���������Ķ���
//		this->age = age;
//	}
//	Person& PersonAddAge(Person& p) {
//		this->age += p.age;
//		//thisָ��p2��ָ�룬��*thisָ�����p2�������ı���
//		return *this;
//	}
//	int age;
//};
////������Ƴ�ͻ
//void test01() {
//	Person p1(18);
//	cout << "p1������Ϊ��" << p1.age << endl;
//}
////2.���ض�������*this
//void test02() {
//	Person p1(10);
//	Person p2(10);
//	p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);
//	cout << "p2������Ϊ��" << p2.age << endl;
//}
//int main() {
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}