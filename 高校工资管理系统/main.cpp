#include"person.h"
int temp1 = 0;
void set()//���˵�
{
	system("color 08");
	cout << "                 ��ѡ����Ҫ�Ĺ���"<<endl;
	cout << "     ��1������Ա����Ϣ    ��2��ɾ��Ա����Ϣ"<<endl;
	cout << "     ��3������Ա����Ϣ    ��4���������˵�" << endl;
	cout << "     ��5��    ����        ��6�����Ա����Ϣ"<<endl;
	cout << "     ��w�����ļ�д������  ��r����ȡ�ļ�����" << endl;
	cout << "     ��0��  �˳�ϵͳ" << endl;
}

void cls()//����
{
	system("cls");
}

void newman()//������Ա����
{
	cout << "����ѡ������Ա����"<<endl;
cout << "��1����ʦ��2��������Ա��3��ʵ�鼼��Ա��4����ʦ��ְʵ�鼼��Ա��5��������Ա��ְ��ʦ" << endl;
int b;
cin >> b;
cout << "����������" << endl;
int bb;
cin>>bb;
switch (b)
{
case 1:for (;bb > 0;bb--)
{
	t.input();
}break;
case 2:for (;bb > 0;bb--)
{
	a.input();
}break;
case 3:for (;bb > 0;bb--)
{
	m.input();
}break;
case 4:for (;bb > 0;bb--)
{
	TA.input();
}break;
case 5:for (;bb > 0;bb--)
{
	MT.input();
}break;

}

}

void deletee()//ɾ������
{

	cout << "����ѡ������Ա����" << endl;
	cout << "��1����ʦ��2��������Ա��3��ʵ�鼼��Ա��4����ʦ��ְʵ�鼼��Ա��5��������Ա��ְ��ʦ" << endl;
	int dd;
	cin >>dd;
	switch (dd)
	{
	case 1:
		t.deletee(temp1);break;
	case 2:
	
		a.deletee(temp1);break;
	case 3:
		m.deletee(temp1);break;
	case 4:
		TA.deletee(temp1);break;
	case 5:
		MT.deletee(temp1);break;

	}

}

void finding(int aa)//���Һ���
{

	cout << "����ѡ������Ա����" << endl;
	cout << "��1����ʦ��2��������Ա��3��ʵ�鼼��Ա��4����ʦ��ְʵ�鼼��Ա��5��������Ա��ְ��ʦ" << endl;
	int f;
	cin >> f;
	switch (f)
	{
	case 1:
	t.finding(aa);break;
	case 2:
		a.finding(aa);break;
	case 3:
		m.finding(aa);break;
	case 4:TA.finding(aa);break;
	case 5:
		MT.finding(aa);break;
	}
}

void clear()
{
	ofstream x("c:\\data.txt", ios_base::out | ios_base::trunc);

}

void write()
{
	ofstream outfile("c:\\data.txt");
	if (!outfile)
	{
		cerr << "���ļ�����!" << endl;
		exit(1);
	}

	int ii = i;int iii = 0;
	while (iii<ii-1)
	{
		outfile << t.te[iii] << " ";

		iii++;
	}
	
	outfile << '\n' ;
	int i11 = i1;int i111 = 0;
	while (i111 < i11 - 1)
	{
		outfile <<a.ass[i111] << " ";
		i111++;
	}
	outfile << '\n';

	int i22 = i2;int i222 = 0;
	while (i222 < i22 - 1)
	{
		outfile << m.man[i222] << " ";
		i222++;
	}
	outfile << '\n';
	
	int i33 = i3;int i333 = 0;
	while (i333 < i33 - 1)
	{
		outfile << TA.ta[i333] << " ";
		i333++;
	}
	outfile << '\n';

	int i44 = i4;int i444 = 0;
	while (i444 < i44 - 1)
	{
		outfile << MT.mt[i444] << " ";
		i444++;
	}
	outfile << '\n';

	outfile.close();
}

void read()
{
	ifstream infile("c:\\data.txt");
	if (!infile)
	{
		cerr << "���ļ�����!" << endl;
		exit(1);
	}

	cout << "���ļ��ɹ�"<<endl;

	string temp[2000];int temp2;string aaa;

	while (!infile.eof())
	{
		infile>>temp[temp1];
		temp1++;
	}
	temp2 = 1;
	int j1 = 1;int j2;int j3;int j4;int j5;j2 = j3 = j4 = j5 = j1;
	while (temp2 < temp1+1)
	{
		cout << temp[temp2-1] << " ";
		aaa = temp[temp2];
		if (aaa == "1")
		{
			t.te[j1]=aaa;
			t.te[j1-1]= temp[temp2-1];
			t.te[j1+1]= temp[temp2+1];
			t.te[j1+2]= temp[temp2+2];
			j1 = j1 + 4;
		}

		if (aaa == "2")
		{
			a.ass[j2] = aaa;
			a.ass[j2 - 1] = temp[temp2 - 1];
			a.ass[j2 + 1] = temp[temp2 + 1];
			a.ass[j2 + 2] = temp[temp2 + 2];
			j2 = j2 + 4;
		}
		if (aaa == "3")
		{
			m.man[j3] = aaa;
			m.man[j3 - 1] = temp[temp2 - 1];
			m.man[j3 + 1] = temp[temp2 + 1];
			m.man[j3 + 2] = temp[temp2 + 2];
			j3 = j3 + 4;
		}
		if (aaa == "4")
		{
			TA.ta[j4] = aaa;
			TA.ta[j4 - 1] = temp[temp2 - 1];
			TA.ta[j4 + 1] = temp[temp2 + 1];
			TA.ta[j4 + 2] = temp[temp2 + 2];
			j4 = j4 + 4;
		}
		if (aaa == "5")
		{
			MT.mt[j5] = aaa;
			MT.mt[j5 - 1] = temp[temp2 - 1];
			MT.mt[j5 + 1] = temp[temp2 + 1];
			MT.mt[j5 + 2] = temp[temp2 + 2];
			j5 = j5 + 4;
		}
		temp2++;
	}

	infile.close();
}

int main()
{
	cout << "               ��ӭʹ�ù��ʹ���ϵͳ               " << endl;
	set();
	char n;n = 'q';

	while(n='0')
	{ 
	cin >> n;
	switch (n)
	{
	case '1':newman();cout << "���������"<<endl;break;
	case '2':deletee();cout << "���������" << endl;break;
	case '3':finding(temp1);cout << "���������" << endl;break;
	case '4':set();cout << "���������" << endl;;break;
	case '5':cls();cout << "���������" << endl;break;
	case '6':clear();cout << "���������" << endl;break;
	case 'w':write();cout << "���������" << endl;break;
	case 'r':read();cout << "���������" << endl;break;
	case '0':return 0;
	default:break;
	}

	}
	system("pause");
	return 0;
}