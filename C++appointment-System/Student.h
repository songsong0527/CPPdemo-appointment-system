#pragma once
#include <iostream>
#include "Identity.h"
using namespace std;

//ѧ����
class Student : public Identity {

public:
	//Ĭ�Ϲ���
	Student();
	//�вι���
	Student(int id, string name, string pwd);
	//��д�鷽��
	virtual void OperMenu();
	//����ԤԼ
	void ApplyOrder();
	//�鿴����ԤԼ
	void ShowMyOrder();
	// �鿴����ԤԼ
	void ShowAllOrder();
	// ȡ��ԤԼ
	void CancelOrder();
	//ѧ������
};
