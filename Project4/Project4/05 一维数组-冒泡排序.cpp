#include <iostream>
using namespace std;

int main5() {
	int arr[] = { 4, 2, 8, 0, 5, 7, 1, 3, 9 };
	cout << "ÅÅĞòÇ°£º";
	for (int i = 0; i < 9; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < 9 - 1; i++) {
		for (int j = 0; j < 9 - i - 1; j++) {
			if (arr[j + 1] < arr[j]) {
				int temp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = temp;
			}
		}
	}

	cout << "ÅÅĞòºó£º";
	for (int i = 0; i < 9; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}