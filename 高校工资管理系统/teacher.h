#include<iostream>
#include<string>
using namespace std;
int i = 1;
class teacher
{
public:
	int newteacher()
	{
		cout << "�������������ݹ�ģ" << endl;
		int mennum;
		cin >> mennum;
		while (mennum > 0)
		{
			cout << "��������Ӧ�Ĺ��š���������ѧ�ڹ�����" << endl;
			cin >> num >> name >>lasttermwork;
			salary = 1000 + (lasttermwork - 180) * 20;
			
		}
		
	}

	int deleteteacher()
	{
		

	}

	int finding()
	{
		

	}

private:
	string name;
	int num;
	int salary;
	int lasttermwork;
};
teacher T;