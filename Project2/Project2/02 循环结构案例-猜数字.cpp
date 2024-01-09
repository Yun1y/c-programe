#include <iostream>
using namespace std;
#include <ctime>

int main02() {
	srand((unsigned int)time(NULL));
	int num = rand() % 100 + 1;//该行代码随机生成1~100随机数
	//cout << num << endl;
	int val = 0;
	while (1) {
		cin >> val;
		if (val > num) {
			cout << "猜测过大" << endl;
		}
		else if (val < num) {
			cout << "猜测过小" << endl;
		}
		else {
			cout << "恭喜猜对了" << endl;
			break;
		}
	}
	system("pause");
	return 0;
}