#include <iostream>
using namespace std;

//���캯���ķ��༰����
//1.����
//���ղ�������  �вι�����޲ι���(Ĭ�Ϲ���)
//�������ͷ���  ��ͨ����  ��������
class Person2 {
public:
	//���캯��
	Person2() {
		cout << "Person���޲ι��캯������" << endl;
	}
	Person2(int a) {
		age = a;
		cout << "Person���вι��캯������" << endl;
	}
	//�������캯��
	Person2(const Person2& p) {
		cout << "Person�Ŀ������캯������" << endl;
		//������������ϵ��������ԣ� ������������
		age = p.age;
	}
	~Person2() {
		cout << "Person ������������" << endl;
	}
	
	int age;
};
//2.����
void test_2() {
	//1�����ŷ�
	//Person p1;//Ĭ�Ϲ��캯���ĵ���
	//Person p2(10);//�вι��캯��
	//Person p3(p2);//�������캯��
    //ע������
	//����Ĭ�Ϲ��캯����ʱ�򣬲�Ҫ��()
	//��Ϊ�������д��룬����������Ϊ��һ���������� ���� void func();��������
    /*Person p();*/
	//cout << "p2������Ϊ��" << p2.age << endl;
	//cout << "p3������Ϊ��" << p3.age << endl;

	//2����ʾ��
	//Person p1;
	//Person p2 = Person(10);//�вι���
	//Person p3 = Person(p2);//��������
	//Person(10);//�������� �ص㣺��ǰ��ִ�н�����ϵͳ���������յ���������
	//cout << "aaaaa" << endl;

	//ע������2
	//��Ҫ���ÿ������캯�� ��ʼ���������� ����������ΪPerson(p3)�ȼ��� Person p3;Ҳ���Ƕ��������
	//Person(p3);

	//3����ʽת����
	Person2 p4 = 10;//�൱�� д�� Person p4 = Person(10);
	Person2 p5 = p4;//��������
}
int main2() {
	test_2();
	system("pause");
	return 0;
}