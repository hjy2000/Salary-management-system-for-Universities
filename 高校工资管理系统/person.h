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
	string num; //����
	string Name; //����
	string Duty; //��Ա���(1-��ʦ,2-ʵ��Ա,3-������Ա,4-��ʦ��ʵ��Ա,5-�������ʦ)
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
	virtual void input() = 0; //�Ӽ�����������
	virtual double income() = 0; //��������

	friend class College;
};

class Teacher :virtual public Person //��ʦ��
{
protected:
	double Hours; //��ʦ��ʱ
	
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
		cout << "����:"; cin >> num;te[i] = num;i++;
		te[i] = Duty;i++;
		cout << "����:"; cin >> Name;te[i] = Name;i++;
		cout << "��ѧ�ڿ�ʱ��:"; cin >> Hours;
		double s = income();
		sprintf_s(buffer,"%lf",s);
		te[i] = buffer;i++;
		te[i] = '\n';i++;
	}

	void finding(int aa)
	{
		cout << "�������������Ա���Ĺ���" <<  endl;
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
				cout << "�Ѳ��ҵ���Ա��" << endl;flag1 = 1;flag2 = find;
				cout << "��Ա��������Ϊ��" << te[find + 2]<<" ";
				cout << "��Ա���Ĺ���Ϊ��" << te[find + 3] << endl;
				break;
			}
			find++;

		}
		if (flag1 == 0)
		{
			cout << "��Ա��������"<<endl;
		}
	}

	void deletee(int aa)
	{
		finding(aa);
		te[flag2] = te[flag2 + 1] = te[flag2 + 2] = te[flag2+3]='0';
		cout << "ɾ���ɹ�" << endl;
	}

	double income()
	{
		return Salary + (Hours - 180) * 20;
	}
};Teacher t;


class Assistant :virtual public Person //ʵ��Ա
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
		cout << "����:"; cin >> num;ass[i1] = num;i1++;
		ass[i1] = Duty;i1++;
		cout << "����:"; cin >> Name;ass[i1] = Name;i1++;
		double s = income();
		sprintf_s(buffer, "%lf", s);
		ass[i1] = buffer;i1++;
		ass[i1] = '\n';i1++;
	}

	void finding(int aa)
	{
		cout << "�������������Ա���Ĺ���" << endl;
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
				cout << "�Ѳ��ҵ���Ա��" << endl;flag1 = 1;
				cout << "��Ա��������Ϊ��" << ass[find + 2] << " ";
				cout << "��Ա���Ĺ���Ϊ��" << ass[find + 3] << endl;
				break;
			}
			find++;

		}
		if (flag1 == 0)
		{
			cout << "��Ա��������"<<endl;
		}
	}

	void deletee(int aa)
	{
		finding(aa);
		ass[flag2] = ass[flag2 + 1] = ass[flag2 + 2] = ass[flag2 + 3] = '0';
		cout << "ɾ���ɹ�" << endl;
	}

	double income()
	{
		return Salary + Allowance ;
	}
};Assistant a;


class Manager :virtual public Person //������Ա
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
		cout << "����:"; cin >> num;man[i2] = num;i2++;
		man[i2] = Duty;i2++;
		cout << "����:"; cin >> Name;man[i2] = Name;i2++;
		double s = income();
		sprintf_s(buffer, "%lf", s);
		man[i2] = buffer;i2++;
		man[i2] = '\n';i2++;
	}

	void finding(int aa)
	{
		cout << "�������������Ա���Ĺ���" << endl;
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
				cout << "�Ѳ��ҵ���Ա��" << endl;flag1 = 1;
				cout << "��Ա��������Ϊ��" << man[find + 2] << " ";
				cout << "��Ա���Ĺ���Ϊ��" << man[find + 3] << endl;
				break;
			}
			find++;

		}
		if (flag1 == 0)
		{
			cout << "��Ա��������"<<endl;
		}
	}

	void deletee(int aa)
	{
		finding(aa);
		man[flag2] = man[flag2 + 1] = man[flag2 + 2] = man[flag2 + 3] = '0';
		cout << "ɾ���ɹ�" << endl;
	}
	
	double income()
	{
		return Salary + Allowance;
	}
};Manager m;

class Teacher_Assistant :public Teacher, public Assistant //��ʦ��ʵ��Ա
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
		cout << "����:"; cin >> num;ta[i3] = num;i3++;
		ta[i3] = Duty;i3++;
		cout << "����:"; cin >> Name;ta[i3] = Name;i3++;
		cout << "��ѧ�ڿ�ʱ��:"; cin >>Teacher::Hours;
		double s = income();
		sprintf_s(buffer, "%lf", s);
		ta[i3] = buffer;i3++;
		ta[i3] = '\n';i3++;
	}

	void finding(int aa)
	{
		cout << "�������������Ա���Ĺ���" << endl;
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
				cout << "�Ѳ��ҵ���Ա��" << endl;flag1 = 1;
				cout << "��Ա��������Ϊ��" << ta[find + 2] << " ";
				cout << "��Ա���Ĺ���Ϊ��" << ta[find + 3] << endl;
				break;
			}
			find++;

		}
		if (flag1 == 0)
		{
			cout << "��Ա��������"<<endl;
		}
	}

	void deletee(int aa)
	{
		finding(aa);
		ta[flag2] = ta[flag2 + 1] = ta[flag2 + 2] = ta[flag2 + 3] = '0';
		cout << "ɾ���ɹ�" << endl;
	}

	double income()
	{
		return Salary + (Teacher::Hours - 180) * 20+ Allowance;
	}
};Teacher_Assistant TA;

class Manager_Teacher :public Manager, public Teacher //������Ա���ʦ
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
		cout << "����:"; cin >> num;mt[i4] = num;i4++;
		mt[i4] = Duty;i++;
		cout << "����:"; cin >> Name;mt[i4] = Name;i4++;
		cout << "��ѧ�ڿ�ʱ��:"; cin >> Teacher::Hours;
		double s = income();
		sprintf_s(buffer, "%lf", s);
		mt[i4] = buffer;i++;
		mt[i4] = '\n';i++;
	}

	void finding(int aa)
	{
		cout << "�������������Ա���Ĺ���" << endl;
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
				cout << "�Ѳ��ҵ���Ա��" << endl;
				cout << "��Ա��������Ϊ��" << mt[find + 2] << " ";
				cout << "��Ա���Ĺ���Ϊ��" << mt[find + 3] << endl;
				break;
			}
			find++;

		}

		if (flag1 == 0)
		{
			cout << "��Ա��������"<<endl;
		}
	}

	void deletee(int aa)
	{
		finding(aa);
		mt[flag2] = mt[flag2 + 1] = mt[flag2 + 2] = mt[flag2 + 3] = '0';
		cout << "ɾ���ɹ�" << endl;
	}
	
	double income()
	{
		return Salary + Allowance + (Hours - 180) * 20;
	}
};
Manager_Teacher MT;