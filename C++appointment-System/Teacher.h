#pragma once
#include "Identity.h"
#include <iostream>

using namespace std;
class Teacher :public Identity {
public:
	Teacher();
	Teacher(int empId, string name, string pwd);
	//职工号
	int m_Empid;
	//菜单界面，基类虚方法
	virtual void OperMenu();
	//查看所有预约
	void ShowAllOrder();
	//审核预约
	void ValidOrder();
};