#include <iostream>
using namespace std;

struct student {
	string name;
	int age;
	int score;
};
struct teacher {
	int id;
	string name;
	int age;
	struct student stu;
};
int main4() {
	teacher t;
	t.id = 10000;
	t.name = "����";
	t.age = 50;
	t.stu.name = "С��";
	t.stu.age = 20;
	t.stu.score = 60;

	cout << "��ʦ������" << t.name << " ��ʦ��ţ�" << t.id << " ��ʦ���䣺" << t.age
		<< " ��ʦ������ѧ������Ϊ��" << t.stu.name << " ѧ�����䣺" << t.stu.age
		<< " ѧ�����Է���Ϊ��" << t.stu.score << endl;
	system("pause");
	return 0;
}