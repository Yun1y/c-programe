#include <iostream>
using namespace std;

int main26() {
	int score = 0;
	cout << "���������ķ�����";
	cin >> score;

	cout << "������ķ���Ϊ��" << score << endl;
	if (score > 600) {
		cout << "��ϲ��������һ����ѧ" << endl;
	}
	else if (score > 500) {
		cout << "��ϲ�������˶�����ѧ" << endl;
	}
	else if (score > 400) {
		cout << "��ϲ��������������ѧ" << endl;
	}
	else {
		cout << "δ���ϱ��ƴ�ѧ�����ٽ�����" << endl;
	}
	system("pause");
	return 0;
}