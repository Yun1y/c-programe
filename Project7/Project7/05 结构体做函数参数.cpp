#include <iostream>
using namespace std;

struct student {
	string name;
	int age;
	int score;
};
//值传递
void printStudent1(struct student s) {
	s.age = 100;
	cout << "子函数中打印姓名：" << s.name 
	 << " 年龄：" << s.age 
	 << " 分数：" << s.score << endl;
}
//地址传递
void printStudent2(struct student *p) {
	p->age = 200;
	cout << "子函数2中打印姓名：" << p->name
		<< " 年龄：" << p->age
		<< " 分数：" << p->score << endl;
}
int main5() {
	student s;
	s.name = "张三";
	s.age = 20;
	s.score = 85;
	//printStudent1(s);
	printStudent2(&s);
	cout << "main函数中打印姓名：" << s.name 
		 << " 年龄：" << s.age 
		 << " 分数：" << s.score << endl;
	system("pause");
	return 0;
}