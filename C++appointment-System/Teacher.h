#pragma once
#include "Identity.h"
#include <iostream>

using namespace std;
class Teacher :public Identity {
public:
	Teacher();
	Teacher(int empId, string name, string pwd);
	//ְ����
	int m_Empid;
	//�˵����棬�����鷽��
	virtual void OperMenu();
	//�鿴����ԤԼ
	void ShowAllOrder();
	//���ԤԼ
	void ValidOrder();
};