#include <iostream>
using namespace std;

int main28() {
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;

	cout << "������С��A�����أ�";
	cin >> num1;

	cout << "������С��B�����أ�";
	cin >> num2;

	cout << "������С��C�����أ�";
	cin >> num3;

	cout << "С��A������Ϊ��" << num1 << endl;
	cout << "С��B������Ϊ��" << num2 << endl;
	cout << "С��C������Ϊ��" << num3 << endl;

	if (num1 > num2) {
		if (num1 > num3) {
			cout << "С��A����" << endl;
		}
		else {
			cout << "С��C����" << endl;
		}
	}
	else {
		if (num2 > num3) {
			cout << "С��B����" << endl;
		}
		else {
			cout << "С��C����" << endl;
		}
	}
	system("pause");
	return 0;
}