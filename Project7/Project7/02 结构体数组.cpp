#include <iostream>
using namespace std;
#include <string>

struct Student {
	string name;
	int age;
	int score;
};
int main2() {
	//�����ṹ������
	struct Student stuArray[3] = {
		{"����", 18, 100},
		{"����", 28, 99},
		{"����", 38, 66}
	};

	stuArray[2].name = "����";
	stuArray[2].age = 80;
	stuArray[2].score = 60;

	for (int i = 0; i < 3; i++) {
		cout << "������" << stuArray[i].name
			 << " ���䣺" << stuArray[i].age
			 << " ������" << stuArray[i].score << endl;
	}
	system("pause");
	return 0;
}