#pragma once
#include <iostream>
#include "Identity.h"
using namespace std;
class Manager :public Identity {
public:
	Manager();
	Manager(string name,string pwd);
	//操作菜单，基类虚方法
	virtual void OperMenu();
	//添加账号
	void AddPerson();
	//查看账号
	void ShowPerson();
	//查看机房信息
	void ShowComputer();
	//清空预约记录
	void CleanFile();
};
