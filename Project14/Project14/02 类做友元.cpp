//#include <iostream>
//using namespace std;
//
//class Building;
//class GoodGay {
//public:
//	GoodGay();
//public:
//	void visit();//�ιۺ���������building�е�����
//
//	Building* building;
//};
//class Building {
//	//GoodGay�Ǳ���ĺ����ѣ����Է��ʱ����е�˽�г�Ա
//	friend class GoodGay;
//public:
//	Building();
//public:
//	string m_Sittingroom;//����
//private:
//	string m_Bedroom;//����
//};
////����д��Ա����
//Building::Building() {
//	m_Sittingroom = "����";
//	m_Bedroom = "����";
//}
//GoodGay::GoodGay() {
//	//�������������
//	building = new Building;
//}
//void GoodGay::visit() {
//	cout << "�û��������ڷ��ʣ�" << building->m_Sittingroom << endl;
//	cout << "�û��������ڷ��ʣ�" << building->m_Bedroom << endl;
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