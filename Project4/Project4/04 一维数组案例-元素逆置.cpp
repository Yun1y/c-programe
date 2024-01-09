#include <iostream>
using namespace std;

int main4() {
	int arr[5] = { 1, 3, 2, 5, 4 };
	cout << "数组逆置前：" << endl;
	for (int i = 0; i < 5; i++) {
		cout << arr[i] << endl;
	}

	int start = 0;
	int end = sizeof(arr) / sizeof(arr[0]) - 1;

	while (start < end) {
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;

		start++;
		end--;
	}

	cout << "数组逆置后：" << endl;
	for (int i = 0; i < 5; i++) {
		cout << arr[i] << endl;
	}
	system("pause");
	return 0;
}