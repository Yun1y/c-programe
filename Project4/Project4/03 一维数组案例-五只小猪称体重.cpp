#include <iostream>
using namespace std;

int main3() {
	int arr[5] = { 300, 350, 500, 400, 250 };
	int max = 0;
	for (int i = 0; i < 5; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
		//cout << arr[i] << endl;
	}
	cout << "���ص�С������Ϊ��" << max << endl;
	system("pause");
	return 0;
}