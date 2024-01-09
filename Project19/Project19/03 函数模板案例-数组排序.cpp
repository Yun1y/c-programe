//#include <iostream>
//using namespace std;
//
////实现通用 对数组进行排序的函数
////规则从大到小
////算法 选择
////测试 char数组、int数组
//
////交换函数模板
//template<class T>
//void mySwap(T& a, T& b) {
//	T temp = a;
//	a = b;
//	b = temp;
//}
////排序算法
//template<class T>
//void mySort(T arr[], int len) {
//	for (int i = 0; i < len; i++) {
//		int max = i;//认定最大值下标
//		for (int j = i + 1; j < len; j++) {
//			//认定的最大值 比遍历出的数值要小 说明j下标的元素才是真正的最大值
//			if (arr[max] < arr[j]) {
//				max = j;//更新最大值下标
//			}
//		}
//		if (max != i) {
//			//交换max和i元素
//			mySwap(arr[max], arr[i]);
//		}
//	}
//}
////提供打印数组模板
//template<class T>
//void printArray(T arr[], int len) {
//	for (int i = 0; i < len; i++) {
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//}
//void test01() {
//	//测试char数组
//	char charArr[] = "badcfe";
//	int num = sizeof(charArr) / sizeof(char);
//	mySort(charArr, num);
//	printArray(charArr, num);
//}
//void test02() {
//	//测试int数组
//	int intArr[] = { 5, 3, 6, 7, 8, 2, 9, 1, 4 };
//	int num = sizeof(intArr) / sizeof(int);
//	mySort(intArr, num);
//	printArray(intArr, num);
//}
//int main() {
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}