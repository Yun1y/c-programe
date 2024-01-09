#include <iostream>
using namespace std;

int main27() {
	int score = 0;
	cout << "请输入您的高考分数：";
	cin >> score;
	cout << "您输入的高考分数为：" << score << endl;

	if (score > 600) {
		cout << "恭喜您考上一本大学" << endl;
		if (score > 700) {
			cout << "您能考入北京大学" << endl;
		}
		else if (score > 650) {
			cout << "您能考入清华大学" << endl;
		}
		else {
			cout << "您能考入人民大学" << endl;
		}
	}
	else if (score > 500) {
		cout << "恭喜您考上二本大学" << endl;
	}
	else if (score > 400) {
		cout << "恭喜您考上三本大学" << endl;
	}
	else {
		cout << "未考上本科大学，请再接再厉" << endl;
	}
	system("pause");
	return 0;
}