#include <iostream>
using namespace std;

//�����������������
//��ӡ�����
class MyPrint {
public:
	//���غ������������
	void operator()(string text) {
		cout << text << endl;
	}
};
void MyPrint02(string test) {
	cout << test << endl;
}
void test01() {
	MyPrint myPrint;
	myPrint("Hello World");//����ʹ�������ǳ������ں������ã���˳�Ϊ�º���
	MyPrint02("Hello World");
}
//�º����ǳ���û�й̶�д��
//�ӷ���
class MyAdd {
public:
	int operator()(int num1, int num2) {
		return num1 + num2;
	}
};
void test02() {
	MyAdd myAdd;
	int res = myAdd(100, 100);
	cout << "res = " << res << endl;

	//������������
	cout << MyAdd()(100, 100) << endl;
}
int main() {
	//test01();
	test02();
	system("pause");
	return 0;
}