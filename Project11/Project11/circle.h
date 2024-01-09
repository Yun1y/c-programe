#pragma once
#include <iostream>
using namespace std;
#include "point.h"

//圆类
class Circle {
public:
	//设置半径
	void setR(int r);
	//获取半径
	int getR();
	//设置圆心
	void setCenter(Point center);
	//获取圆心
	Point getCenter();
private:
	int m_R;//半径
	Point m_Center;//圆心
};