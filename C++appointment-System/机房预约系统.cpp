#include <iostream>

using namespace std;

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
			
			break;
		case 2://��ʦ
			
			break;
		case 3://����Ա
			
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