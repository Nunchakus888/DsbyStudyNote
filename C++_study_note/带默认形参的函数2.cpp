
#include <iostream>
using namespace std;

int add (int ,int =10, int =5);//����������ٶ��庯����Ҫ������ʱԤ�������ֵ��ͬ�����Բ�д�������� 

int main ()
{
	cout << add (1) <<endl;
	cout << add (1,2) <<endl;
	cout << add (1,2,3) <<endl;
	
	return 0;
}

int add (int a, int b, int c )//��������Ԥ�������ֵ ,�ڴ˴������庯�� ������Ԥ����ֵ 
{
	return a+b+c;
}
/*Ĭ���β�ֵ�����Ǵ��������˳����
����int add (int b = 10,int c=5, int a); ���� 
int add (int  = 10,int a, int c=5); ���� 
int add (int a, int b = 10,int c=5); ���ԣ�*/
