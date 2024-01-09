#include <iostream>
using namespace std;

int max5(int a, int b);
int main5() {
	int a = 10;
	int b = 20;

	cout << max(a, b) << endl;
	system("pause");
	return 0;
}

int max5(int a, int b) {
	return a > b ? a : b;
}