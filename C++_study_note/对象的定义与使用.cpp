// ����Ķ�����ʹ��.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
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
	void Its (void)
	{
		cout << "The Cat is " << Name <<endl
			<< "Color is " << color <<endl
			<< "Age is " << age << endl;  //���к����������г�Ա��ֱ�ӷ���

		return ;
	}
};

int _tmain(int argc, _TCHAR* argv[])
{
	class Cat a; //�������
	a.Age (3); //�����Ա���� ������.��Ա��
	a.name ();
	a.Its ();

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

/*	
	��Ķ����Ǹ����ĳһ�����ʵ�壬���������͵ı�����
		����������ʽ�� ���� ��������
	���г�Ա���ʣ�ֱ�ӷ��ʳ�Ա����
	������ʳ�Ա��
		������.��Ա�� ��ֻ�ܷ���public�������ģ������µĳ�Ա�� ��
*/
