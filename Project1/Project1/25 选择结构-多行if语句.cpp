#include <iostream>
using namespace std;

int main25() {
	int score = 0;
	
	cout << "请输入一个分数：";
	cin >> score;
	cout << "你输入的分数为：" << score << endl;

	if (score > 600) {
		cout << "恭喜 考上一本大学！" << endl;
	} else {
		cout << "未考上一本大学" << endl;
	}
	system("pause");
	return 0;
}