//#include <iostream>
//using namespace std;
//
////����ģ��ע������
//template<class T>//typename�����滻��class
////1���Զ������Ƶ��������Ƶ���һ����������T�ſ���ʹ��
//void mySwap(T& a, T& b) {
//	T temp = a;
//	a = b;
//	b = temp;
//}
//void test01() {
//	int a = 10;
//	int b = 20;
//	char c = 'c';
//
//	//mySwap(a, b);//��ȷ��
//    //mySwap(a, c);//���� �Ƶ�����һ�µ��������ͣ�
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//}
////2��ģ�����Ҫȷ����T���������ͣ��ſ���ʹ��
//template<class T>
//void func() {
//	cout << "func ����" << endl;
//}
//void test02() {
//	func<int>();
//}
//int main() {
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}