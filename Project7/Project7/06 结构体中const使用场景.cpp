#include <iostream>
using namespace std;
#include <string>

struct student {
	string name;
	int age;
	int score;
};
//�������е��βθ�Ϊָ�룬���Լ����ڴ�ռ䣬���Ҳ��Ḵ�Ƴ��µĸ�������
void printStudents(const student *s) {
	//s->age = 150;����const֮��һ�����޸ĵĲ����ͻᱨ�����Է�ֹ���ǵ������
	cout << "������" << s->name 
		 << " ���䣺" << s->age 
		 << " ������" << s->score << endl;
}
int main6() {
	struct student s = { "����", 15, 70 };
	printStudents(&s);
	system("pause");
	return 0;
}