#include "Student.h"

Student::Student() {}
//�вι���
Student::Student(int id, string name, string pwd) {}
//��д�鷽��
void Student::OperMenu() {
	cout << "��ѡ����Ҫ���еĲ���" << endl;
	cout << "1.����ԤԼ" << endl;
	cout << "2.�鿴����ԤԼ" << endl;
	cout << "3.�鿴����ԤԼ" << endl;
	cout << "4.ȡ������ԤԼ" << endl;
}
//����ԤԼ
void Student::ApplyOrder() {

}
//�鿴����ԤԼ
void Student::ShowMyOrder() {}
// �鿴����ԤԼ
void Student::ShowAllOrder() {}
// ȡ��ԤԼ
void Student::CancelOrder() {}
//ѧ������