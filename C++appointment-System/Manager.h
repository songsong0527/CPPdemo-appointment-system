#pragma once
#include <iostream>
#include "Identity.h"
using namespace std;
class Manager :public Identity {
public:
	Manager();
	Manager(string name,string pwd);
	//�����˵��������鷽��
	virtual void OperMenu();
	//����˺�
	void AddPerson();
	//�鿴�˺�
	void ShowPerson();
	//�鿴������Ϣ
	void ShowComputer();
	//���ԤԼ��¼
	void CleanFile();
};
