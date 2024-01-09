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
	t.name = "老王";
	t.age = 50;
	t.stu.name = "小王";
	t.stu.age = 20;
	t.stu.score = 60;

	cout << "老师姓名：" << t.name << " 老师编号：" << t.id << " 老师年龄：" << t.age
		<< " 老师辅导的学生姓名为：" << t.stu.name << " 学生年龄：" << t.stu.age
		<< " 学生考试分数为：" << t.stu.score << endl;
	system("pause");
	return 0;
}