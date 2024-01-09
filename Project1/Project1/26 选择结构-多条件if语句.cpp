#include <iostream>
using namespace std;

int main26() {
	int score = 0;
	cout << "请输入您的分数：";
	cin >> score;

	cout << "您输入的分数为：" << score << endl;
	if (score > 600) {
		cout << "恭喜您考上了一本大学" << endl;
	}
	else if (score > 500) {
		cout << "恭喜您考上了二本大学" << endl;
	}
	else if (score > 400) {
		cout << "恭喜您考上了三本大学" << endl;
	}
	else {
		cout << "未考上本科大学，请再接再厉" << endl;
	}
	system("pause");
	return 0;
}