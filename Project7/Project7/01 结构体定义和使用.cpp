#include <iostream>
using namespace std;
#include <string>

struct Student {
	string name;
	int age;
	int score;
}s3;//�ڴ����ṹ��ʱ��˳�㴴���ṹ�����
int main1() {
	//��C++��struct�ؼ��ֿ���ʡ��
	Student s1;
	s1.name = "����";
	s1.age = 18;
	s1.score = 100;

	cout << "������" << s1.name << " ���䣺" << s1.age << " ������" << s1.score << endl;

	struct Student s2 = { "����", 19, 80 };

	cout << "������" << s2.name << " ���䣺" << s2.age << " ������" << s2.score << endl;

	s3.name = "����";
	s3.age = 20;
	s3.score = 60;
	cout << "������" << s3.name << " ���䣺" << s3.age << " ������" << s3.score << endl;

	system("pause");
	return 0;
}