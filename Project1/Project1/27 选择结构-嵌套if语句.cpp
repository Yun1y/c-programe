#include <iostream>
using namespace std;

int main27() {
	int score = 0;
	cout << "���������ĸ߿�������";
	cin >> score;
	cout << "������ĸ߿�����Ϊ��" << score << endl;

	if (score > 600) {
		cout << "��ϲ������һ����ѧ" << endl;
		if (score > 700) {
			cout << "���ܿ��뱱����ѧ" << endl;
		}
		else if (score > 650) {
			cout << "���ܿ����廪��ѧ" << endl;
		}
		else {
			cout << "���ܿ��������ѧ" << endl;
		}
	}
	else if (score > 500) {
		cout << "��ϲ�����϶�����ѧ" << endl;
	}
	else if (score > 400) {
		cout << "��ϲ������������ѧ" << endl;
	}
	else {
		cout << "δ���ϱ��ƴ�ѧ�����ٽ�����" << endl;
	}
	system("pause");
	return 0;
}