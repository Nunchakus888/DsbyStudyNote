/*����ģ�������������һ��ͨ�ù��ܵĺ�������֧�ֶ��ֲ�ͬ�βΣ���һ�������غ����ĺ�������ơ�
*/ 
#include <iostream>

using namespace std;

template <typename T>
T abs (T x, T y)//����ģ�� 
{
	return x<y?x:y;
}
 
int main ()
{
	int a = 10,c=13;
	double b = 10.67,d = 12.9;
	cout << abs(a,c) <<endl; //abs(a)Ϊģ�庯�� 
	cout << abs(b,d) <<endl;
	
	return 0;
}
/*����������template <typename ��ʶ��>
��һ����ʶ�������������ͣ�����Ҫ���Ͷ���ʱ�ñ�ʶ�������������ͣ�����ʵ�������Ƶ�������ģ������Ͳ�����
��ʵ��������ģ�庯�����á� 
 ע��template < >����������Զ�������ʶ����
 	ÿ��ģ�庯��ǰ��Ҫ�б�ʶ����������������һ�ζ�������ģ�庯����
 	ģ�庯�����������붨��ֿ���Ҳ���ǣ�������ǰ���������������壩������������ʱ���塣
 	���ģ�庯���ı�ʶ�����Զ�����ͬ��Ҳ����һ����ʶ�����Զ�ζ���ʹ�á�
����
#include <iostream>
#include <stdlib.h>

using namespace std;
template <typename T, typename T2>
T yy (T a, T2 b)
{
	return  0;
}

template <typename T2, typename T>
T2 zz (T2 c, T y)
{
	return 0 ;
}

int main ()
{
	cout <<"gjhgj\n";
	int i = yy (3 ,3.67);
	int z = zz (3 , 7.89);

	system ("pause");
	return 0;
}

//T yy (T a , T2 b)
//{
//	return;			�˷ֿ�дΪ����
//}
*/

