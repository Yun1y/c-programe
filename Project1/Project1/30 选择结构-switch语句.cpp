#include <iostream>
using namespace std;

int main30() {
	cout << "请给电影打分：";
	int score = 0;
	cin >> score;
	cout << "您打的分数为：" << score << endl;
	switch (score) {
	case 10:
		cout << "您认为是经典电影" << endl;
		break;
	case 9:
		cout << "您认为是经典电影" << endl;
		break;
	case 8:
		cout << "您认为电影非常好" << endl;
		break;
	case 7:
		cout << "您认为电影非常好" << endl;
		break;
	case 6:
		cout << "您认为电影一般" << endl;
		break;
	case 5:
		cout << "您认为电影一般" << endl;
		break;
	default:
		cout << "您认为这是烂片" << endl;
		break;
	}
	system("pause");
	return 0;
}