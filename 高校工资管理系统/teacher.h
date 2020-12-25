#include<iostream>
#include<string>
using namespace std;
int i = 1;
class teacher
{
public:
	int newteacher()
	{
		cout << "请输入新增数据规模" << endl;
		int mennum;
		cin >> mennum;
		while (mennum > 0)
		{
			cout << "请输入相应的工号、姓名、上学期工作量" << endl;
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