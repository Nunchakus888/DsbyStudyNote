/*10.06.23
if..else...if..else..���÷���*/
#include <stdio.h>
int main(void)
{
	int a,s;
	printf ("��һ������\n");
	scanf ("%d",&a);
	printf ("����һ������\n");
	scanf ("%d",&s);
	if (a>s) 
	   printf ("%d����%d\n",a,s);
    else if (a=s)
       printf ("%d����%d\n",a,s);
    else 
	   printf ("%dС��%d",a,s);
       
    system ("pause");
	return 0;
}
/*if (A)
    ���1�� 
  else if (B)
     ���2�� 
  else if (C)
      ���3�� 
  ``````
  else
    ���n��
���ܣ����A����ִ�С����1��������B�Ƿ����,������ִ�С����2����
���������Ϳ�C���Դ����ƣ�����������ִ�С����n���� 
  
*/ 
