#pragma once
#include <iostream>
using namespace std;

//身份抽象基类
class Identity {
public:
	virtual void OperMenu() = 0;//操作菜单的纯虚函数，子类必须重写该方法
	string m_Name;//用户名
	string m_Pwd;//密码


};


