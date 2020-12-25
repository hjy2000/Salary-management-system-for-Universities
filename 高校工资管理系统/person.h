#include<iostream>
#include<fstream>
#include <string>
#include<cstdio>
#include<stdlib.h>
using namespace std;

int i = 0;
int i1=0;
int i2 = 0;
int i3 = 0;
int i4 =0;

class Person 
{
protected:
	string num; //工号
	string Name; //姓名
	string Duty; //人员类别(1-教师,2-实验员,3-行政人员,4-教师兼实验员,5-行政兼教师)
	double Salary; 
	Person *next; 

public:
	Person() 
	{
		next = 0; 
	}
	virtual ~Person() 
	{
	}
	virtual void input() = 0; //从键盘输入数据
	virtual double income() = 0; //计算收入

	friend class College;
};

class Teacher :virtual public Person //教师类
{
protected:
	double Hours; //教师课时
	
public:
	string te[2000];
	int flag2;
	Teacher() 
	{
		Duty = '1';
		Salary = 1000;
		
	}

	void input()
	{
		char buffer[100];
		cout << "工号:"; cin >> num;te[i] = num;i++;
		te[i] = Duty;i++;
		cout << "姓名:"; cin >> Name;te[i] = Name;i++;
		cout << "上学期课时数:"; cin >> Hours;
		double s = income();
		sprintf_s(buffer,"%lf",s);
		te[i] = buffer;i++;
		te[i] = '\n';i++;
	}

	void finding(int aa)
	{
		cout << "请输入你想查找员工的工号" <<  endl;
		string num1;int find = 0;
		cin >> num1;bool flag1;flag1 = 0;
		if (i == 0)
		{
			i = aa;
		}
		while (find != i)
		{
			if (num1 == te[find])
			{
				cout << "已查找到此员工" << endl;flag1 = 1;flag2 = find;
				cout << "该员工的姓名为：" << te[find + 2]<<" ";
				cout << "该员工的工资为：" << te[find + 3] << endl;
				break;
			}
			find++;

		}
		if (flag1 == 0)
		{
			cout << "该员工不存在"<<endl;
		}
	}

	void deletee(int aa)
	{
		finding(aa);
		te[flag2] = te[flag2 + 1] = te[flag2 + 2] = te[flag2+3]='0';
		cout << "删除成功" << endl;
	}

	double income()
	{
		return Salary + (Hours - 180) * 20;
	}
};Teacher t;


class Assistant :virtual public Person //实验员
{
protected:
	int Allowance;
	int Hours;
	int flag2;
public:
	string ass[2000];
	Assistant()
	{
		Duty = '2';
		Salary = 850;
		Allowance = 180;
	}

	void input()
	{
		
		char buffer[100];
		cout << "工号:"; cin >> num;ass[i1] = num;i1++;
		ass[i1] = Duty;i1++;
		cout << "姓名:"; cin >> Name;ass[i1] = Name;i1++;
		double s = income();
		sprintf_s(buffer, "%lf", s);
		ass[i1] = buffer;i1++;
		ass[i1] = '\n';i1++;
	}

	void finding(int aa)
	{
		cout << "请输入你想查找员工的工号" << endl;
		string num1;int find = 0;
		cin >> num1;bool flag1=0;
		if (i1 == 0)
		{
			i1 = aa;
		}
		while (find != i1)
		{
			if (num1 == ass[find])
			{
				cout << "已查找到此员工" << endl;flag1 = 1;
				cout << "该员工的姓名为：" << ass[find + 2] << " ";
				cout << "该员工的工资为：" << ass[find + 3] << endl;
				break;
			}
			find++;

		}
		if (flag1 == 0)
		{
			cout << "该员工不存在"<<endl;
		}
	}

	void deletee(int aa)
	{
		finding(aa);
		ass[flag2] = ass[flag2 + 1] = ass[flag2 + 2] = ass[flag2 + 3] = '0';
		cout << "删除成功" << endl;
	}

	double income()
	{
		return Salary + Allowance ;
	}
};Assistant a;


class Manager :virtual public Person //行政人员
{
protected:
	int Allowance;

public:
	string man[2000];
	int flag2;
	Manager()
	{
		Duty = '3';
		Salary = 950;
		Allowance = 280;
	}

	void input()
	{

		char buffer[100];
		cout << "工号:"; cin >> num;man[i2] = num;i2++;
		man[i2] = Duty;i2++;
		cout << "姓名:"; cin >> Name;man[i2] = Name;i2++;
		double s = income();
		sprintf_s(buffer, "%lf", s);
		man[i2] = buffer;i2++;
		man[i2] = '\n';i2++;
	}

	void finding(int aa)
	{
		cout << "请输入你想查找员工的工号" << endl;
		string num1;int find = 0;
		cin >> num1;bool flag1=0;
		if (i2 == 0)
		{
			i2= aa;
		}
		while (find != i2)
		{
			if (num1 == man[find])
			{
				cout << "已查找到此员工" << endl;flag1 = 1;
				cout << "该员工的姓名为：" << man[find + 2] << " ";
				cout << "该员工的工资为：" << man[find + 3] << endl;
				break;
			}
			find++;

		}
		if (flag1 == 0)
		{
			cout << "该员工不存在"<<endl;
		}
	}

	void deletee(int aa)
	{
		finding(aa);
		man[flag2] = man[flag2 + 1] = man[flag2 + 2] = man[flag2 + 3] = '0';
		cout << "删除成功" << endl;
	}
	
	double income()
	{
		return Salary + Allowance;
	}
};Manager m;

class Teacher_Assistant :public Teacher, public Assistant //教师兼实验员
{
public:
	string ta[2000];
	int flag2;
	Teacher_Assistant()
	{
		Duty = '4';
		Teacher::Salary = 1000;
	}
	void input()
	{
		
		char buffer[100];
		cout << "工号:"; cin >> num;ta[i3] = num;i3++;
		ta[i3] = Duty;i3++;
		cout << "姓名:"; cin >> Name;ta[i3] = Name;i3++;
		cout << "上学期课时数:"; cin >>Teacher::Hours;
		double s = income();
		sprintf_s(buffer, "%lf", s);
		ta[i3] = buffer;i3++;
		ta[i3] = '\n';i3++;
	}

	void finding(int aa)
	{
		cout << "请输入你想查找员工的工号" << endl;
		string num1;int find = 0;
		cin >> num1;bool flag1=0;
		if (i3 == 0)
		{
			i3 = aa;
		}
		while (find != i3)
		{
			if (num1 == ta[find])
			{
				cout << "已查找到此员工" << endl;flag1 = 1;
				cout << "该员工的姓名为：" << ta[find + 2] << " ";
				cout << "该员工的工资为：" << ta[find + 3] << endl;
				break;
			}
			find++;

		}
		if (flag1 == 0)
		{
			cout << "该员工不存在"<<endl;
		}
	}

	void deletee(int aa)
	{
		finding(aa);
		ta[flag2] = ta[flag2 + 1] = ta[flag2 + 2] = ta[flag2 + 3] = '0';
		cout << "删除成功" << endl;
	}

	double income()
	{
		return Salary + (Teacher::Hours - 180) * 20+ Allowance;
	}
};Teacher_Assistant TA;

class Manager_Teacher :public Manager, public Teacher //行政人员兼教师
{
public:
	string mt[2000];
	int flag2;
	Manager_Teacher()
	{
		Duty = '5';
		Manager::Salary = 950;
	}

	void input()
	{
		char buffer[100];
		cout << "工号:"; cin >> num;mt[i4] = num;i4++;
		mt[i4] = Duty;i++;
		cout << "姓名:"; cin >> Name;mt[i4] = Name;i4++;
		cout << "上学期课时数:"; cin >> Teacher::Hours;
		double s = income();
		sprintf_s(buffer, "%lf", s);
		mt[i4] = buffer;i++;
		mt[i4] = '\n';i++;
	}

	void finding(int aa)
	{
		cout << "请输入你想查找员工的工号" << endl;
		string num1;int find = 0;
		cin >> num1;bool flag1=0;
		if (i4 == 0)
		{
			i4 = aa;
		}
		while (find != i4)
		{
			if (num1 == mt[find])
			{
				flag1 = 1;
				cout << "已查找到此员工" << endl;
				cout << "该员工的姓名为：" << mt[find + 2] << " ";
				cout << "该员工的工资为：" << mt[find + 3] << endl;
				break;
			}
			find++;

		}

		if (flag1 == 0)
		{
			cout << "该员工不存在"<<endl;
		}
	}

	void deletee(int aa)
	{
		finding(aa);
		mt[flag2] = mt[flag2 + 1] = mt[flag2 + 2] = mt[flag2 + 3] = '0';
		cout << "删除成功" << endl;
	}
	
	double income()
	{
		return Salary + Allowance + (Hours - 180) * 20;
	}
};
Manager_Teacher MT;