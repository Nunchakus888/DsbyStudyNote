//const��Ա�������������ں��������޸���ı�����Ա

#include <iostream>
#include <stdlib.h>
using namespace std ;

class Cat //������ Cat
{
	int age;
	char color[10], Name[10]; //int �� char �������������Ϊ˽�г�Ա��
										//һ��ֻ�������з��ʣ��ⲿ����ֱ�ӷ���
public: //������Ա����ֱ�ӷ���
	void name (void);
	void Age (int a)
	{
		age = a; //���к����������г�Ա��ֱ�ӷ���
		return ;
	}
	void Its (void) const //const��Ա�������������ں��������޸���ı�����Ա
	{
		cout << "The Cat is " << Name <<endl
			<< "Color is " << color <<endl
			<< "Age is " << age << endl;  //���к����������г�Ա��ֱ�ӷ���
		//Age = 5;//������ΪҪ�޸ĳ�Ա����
		return ;
	}
	void its(void) const;//const��Ա��������������ʱҪ����const
};

int main()
{
	class Cat a; //�������
	a.Age (3); //�����Ա���� ������.��Ա��
	a.name ();
	a.Its ();
	a.its();

	system ("pause");
	return 0;
}

void Cat :: name (void) // �������к��� name
{
	cout << "�������֣�" ;
	cin >> Name ;
	cout << "��ɫ��" ;
	cin >> color ;

	return ;
}

void Cat::its(void) const//const�������壬����ʱҲҪ����
{
	cout << "const��Ա����" <<endl;
	//Age = 10;//������ΪҪ�޸ĳ�Ա����
}


