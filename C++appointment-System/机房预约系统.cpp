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

	Identity* person = NULL;//����ָ�룬ָ���������
	ifstream ifs;
	ifs.open(fileName, type);
	if (!ifs.is_open()) {
		cout << "�ļ�������" << endl;
		ifs.close();
		return;
	}
	//׼��j��Ϣ
	int id = 0;
	string name;
	string pwd;
	//�ж����
	if (type == 1) {
		cout << "������ѧ��" << endl;
		cin >> id;
	}
	else if (type == 2)
	{
		cout << "������ְ����" << endl;
		cin >> id;
	}
	cout << "�������û���" << endl;
	cin >> name;
	cout << "����������" << endl;
	cin >> pwd;
	if (type == 1) {
		//ѧ�������֤
		int fId;
		string fName;
		string fPwd;
		while (ifs >> fId && ifs >> fName && ifs >> fPwd) {
			if (fId == id && fName == name && fPwd == pwd) {
				cout << "ѧ����½�ɹ���" << endl;
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
		//��ʦ�����֤
		int fId;
		string fName;
		string fPwd;
		while (ifs >> fId && ifs >> fName && ifs >> fPwd) {
			if (fId == id && fName == name && fPwd == pwd) {
				cout << "��ʦ��½�ɹ���" << endl;
				system("pause");
				system("cls");
				person = new Teacher(id, name, pwd);
				return;
			}
		}
	}
	else if (type == 3) {
		//����Ա�����֤
		string fname;
		string fpwd;
		while (ifs >> fname && ifs >> fpwd)
		{
			if (fname == name && fpwd == pwd) {
				cout << "����Ա��¼�ɹ�" << endl;
				return;
			}
		}
	}
	cout << "��֤ʧ��" << endl;
	system("pause");
	system("cls");
}

int main() {

	int select = 0;
	while (true) {

		cout << "========��ӭ����ԤԼϵͳ========" << endl;
		cout << "������������" << endl;
		cout << "1.ѧ��" << endl;
		cout << "2.��ʦ" << endl;
		cout << "3.����Ա" << endl;
		cout << "0.�˳�" << endl;
		cout << "���������ѡ��" << endl;
		cin >> select;//�����û�ѡ��
		switch (select)
		{
		case 1://ѧ��
			LoginIn(STUDENT_FILE, select);
			break;
		case 2://��ʦ
			LoginIn(TEACHER_FILE, select);
			break;
		case 3://����Ա
			LoginIn(ADMIN_FILE, select);
			break;
		case 0://�˳�
			cout << "��ӭ�´�ʹ��" << endl;
			system("pause");
			return 0;
			break;
		default:
			cout << "��������������ѡ��" << endl;
			system("pause");
			system("cls");
			break;
		}
	}
}