//#include <iostream>
//using namespace std;
//
//class Building;
//class GoodGay {
//public:
//	GoodGay();
//public:
//	void visit();//参观函数，访问building中的属性
//
//	Building* building;
//};
//class Building {
//	//GoodGay是本类的好朋友，可以访问本类中的私有成员
//	friend class GoodGay;
//public:
//	Building();
//public:
//	string m_Sittingroom;//客厅
//private:
//	string m_Bedroom;//卧室
//};
////类外写成员函数
//Building::Building() {
//	m_Sittingroom = "客厅";
//	m_Bedroom = "卧室";
//}
//GoodGay::GoodGay() {
//	//创建建筑物对象
//	building = new Building;
//}
//void GoodGay::visit() {
//	cout << "好基友类正在访问：" << building->m_Sittingroom << endl;
//	cout << "好基友类正在访问：" << building->m_Bedroom << endl;
//}
//void test01() {
//	GoodGay gg;
//	gg.visit();
//}
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}