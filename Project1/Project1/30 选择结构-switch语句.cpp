#include <iostream>
using namespace std;

int main30() {
	cout << "�����Ӱ��֣�";
	int score = 0;
	cin >> score;
	cout << "����ķ���Ϊ��" << score << endl;
	switch (score) {
	case 10:
		cout << "����Ϊ�Ǿ����Ӱ" << endl;
		break;
	case 9:
		cout << "����Ϊ�Ǿ����Ӱ" << endl;
		break;
	case 8:
		cout << "����Ϊ��Ӱ�ǳ���" << endl;
		break;
	case 7:
		cout << "����Ϊ��Ӱ�ǳ���" << endl;
		break;
	case 6:
		cout << "����Ϊ��Ӱһ��" << endl;
		break;
	case 5:
		cout << "����Ϊ��Ӱһ��" << endl;
		break;
	default:
		cout << "����Ϊ������Ƭ" << endl;
		break;
	}
	system("pause");
	return 0;
}