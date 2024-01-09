#include <iostream>
using namespace std;

//圆周率
const double PI = 3.14;
//设计一个圆类
//圆求周长的公式：2 * PI * 半径

//class代表设计一个类，类后面紧跟着就是类的名称
class Circle {
	//访问权限
	//公共权限
public:
	//属性
	// 半径
	int m_r;
	//行为
	//获取圆的周长
	double calculateZC() {
		return 2 * PI * m_r;
	}
};
int main1() {
	//通过圆类 创建具体的圆（对象）
	Circle circle;
	//给圆对象的属性赋值
	circle.m_r = 10;
	cout << "圆的周长为：" << circle.calculateZC() << endl;
	system("pause");
	return 0;
}