#include <iostream>
using namespace std;

int add (int ,int =10, int =5);//ȫ��Ԥ�������ֵ
void ff (void);

int main ()
{
	cout << add (1) <<endl;//���16���õ�ȫ��Ԥ�����β�
	ff ();

	return 0;
}

int add (int a, int b, int c )
{
	return a+b+c;
}

void ff (void)
{
	int add (int ,int =1, int =1);//��ff()�����е�Ԥ�������ֵ
	cout << add (1) <<endl;//��� 3������������������Ĭ���β�
}
/*����ͬ���������ڣ�Ĭ���β�ֵ��ֵӦ����Ψһ��
������ڲ�ͬ���������ڣ�����˵����ͬ��Ĭ���β�*/
