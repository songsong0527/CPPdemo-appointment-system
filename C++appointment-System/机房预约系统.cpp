#include <iostream>
#include "Identity.h"
#include <string>
#include <fstream>
#include "globalFile.h"
#include "Student.h"
#include "Manager.h"
#include "Teacher.h"

using namespace std;

void LoginIn(string fileName, int type) {

	Identity* person = NULL;//父类指针，指向子类对象
	ifstream ifs;
	ifs.open(fileName, type);
	if (!ifs.is_open()) {
		cout << "文件不存在" << endl;
		ifs.close();
		return;
	}
	//准备j信息
	int id = 0;
	string name;
	string pwd;
	//判断身份
	if (type == 1) {
		cout << "请输入学号" << endl;
		cin >> id;
	}
	else if (type == 2)
	{
		cout << "请输入职工号" << endl;
		cin >> id;
	}
	cout << "请输入用户名" << endl;
	cin >> name;
	cout << "请输入密码" << endl;
	cin >> pwd;
	if (type == 1) {
		//学生身份验证
		int fId;
		string fName;
		string fPwd;
		while (ifs >> fId && ifs >> fName && ifs >> fPwd) {
			if (fId == id && fName == name && fPwd == pwd) {
				cout << "学生登陆成功！" << endl;
				system("cls");
				person = new Student(id, name, pwd);
				person->OperMenu();
				int operSelect;
				cin >> operSelect;
				if (operSelect == 1) {

				}
				else if (operSelect == 2)
				{

				}
				else if (operSelect == 3) {

				}
				else if (operSelect == 4) {

				}

				return;
			}
		}
	}
	else if (type == 2) {
		//教师身份验证
		int fId;
		string fName;
		string fPwd;
		while (ifs >> fId && ifs >> fName && ifs >> fPwd) {
			if (fId == id && fName == name && fPwd == pwd) {
				cout << "教师登陆成功！" << endl;
				system("pause");
				system("cls");
				person = new Teacher(id, name, pwd);
				return;
			}
		}
	}
	else if (type == 3) {
		//管理员身份验证
		string fname;
		string fpwd;
		while (ifs >> fname && ifs >> fpwd)
		{
			if (fname == name && fpwd == pwd) {
				cout << "管理员登录成功" << endl;
				return;
			}
		}
	}
	cout << "验证失败" << endl;
	system("pause");
	system("cls");
}

int main() {

	int select = 0;
	while (true) {

		cout << "========欢迎来到预约系统========" << endl;
		cout << "请输入你的身份" << endl;
		cout << "1.学生" << endl;
		cout << "2.老师" << endl;
		cout << "3.管理员" << endl;
		cout << "0.退出" << endl;
		cout << "请输入你的选择" << endl;
		cin >> select;//接收用户选择
		switch (select)
		{
		case 1://学生
			LoginIn(STUDENT_FILE, select);
			break;
		case 2://老师
			LoginIn(TEACHER_FILE, select);
			break;
		case 3://管理员
			LoginIn(ADMIN_FILE, select);
			break;
		case 0://退出
			cout << "欢迎下次使用" << endl;
			system("pause");
			return 0;
			break;
		default:
			cout << "输入有误，请重新选择" << endl;
			system("pause");
			system("cls");
			break;
		}
	}
}