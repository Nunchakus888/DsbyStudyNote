/*10.06.24
������������:��a�Ľ��Ϊ��*/
#include<stdio.h>
int main (viod)
{
	int a,b ;
	printf ("����һ������\na=");
	scanf ("%d",&a);
	printf ("������һ����\nb=");
	scanf ("%d",&b) ;
    int t;  //������ʱ����
    /*  a = b;  ����ʱ��a��b��ֵ��ȣ� 
    	b = a;  (��������ӦΪ�ϸ����a��bֵ�����a��ԭ��ֵ�Ѷ�ʧ����*/
    //��������ȷ�ķ����� 
	t = a;
    a = b;
    b = t;
    printf ("a = %d\nb = %d",a,b);
    system ("pause");
 	return 0;
}
