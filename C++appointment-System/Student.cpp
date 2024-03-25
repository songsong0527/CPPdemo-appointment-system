#include "Student.h"

Student::Student() {}
//有参构造
Student::Student(int id, string name, string pwd) {}
//重写虚方法
void Student::OperMenu() {
	cout << "请选择你要进行的操作" << endl;
	cout << "1.申请预约" << endl;
	cout << "2.查看自身预约" << endl;
	cout << "3.查看所有预约" << endl;
	cout << "4.取消所有预约" << endl;
}
//申请预约
void Student::ApplyOrder() {

}
//查看自身预约
void Student::ShowMyOrder() {}
// 查看所有预约
void Student::ShowAllOrder() {}
// 取消预约
void Student::CancelOrder() {}
//学生属性