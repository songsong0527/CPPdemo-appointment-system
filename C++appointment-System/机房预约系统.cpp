#include <iostream>

using namespace std;

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
			
			break;
		case 2://老师
			
			break;
		case 3://管理员
			
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