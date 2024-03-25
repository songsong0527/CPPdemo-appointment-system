#pragma once
#include <iostream>
#include "Identity.h"
using namespace std;

//学生类
class Student : public Identity {

public:
	//默认构造
	Student();
	//有参构造
	Student(int id, string name, string pwd);
	//重写虚方法
	virtual void OperMenu();
	//申请预约
	void ApplyOrder();
	//查看自身预约
	void ShowMyOrder();
	// 查看所有预约
	void ShowAllOrder();
	// 取消预约
	void CancelOrder();
	//学生属性
};
