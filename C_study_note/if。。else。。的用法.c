/*10.06.23
if..else..���÷���*/

#include<stdio.h> 
#include<conio.h>

int main (void)
{
	int i,j;
	printf ("���������������м���һ���ո����\n");
	scanf ("%d %d",&i,&j);
	if (i > j) 
	  printf ("%d����%d\n",i,j);
    else 
	  printf ("%dС��%d\n",i,j);//if��else��һ���壬д����ʱ��Ϊ�����ַ�Χ���׶�����������һ������м��һ����䡣 
    char ch;
    while ((ch = getchar()) != '\n')
      continue;
    getchar ();  
    printf ("�������\n"); 
    system("pause");
	return 0;
}
/*if(���ʽ)
     ���1��
  else
     ���2��
���壺���if����ʽ��ֵΪ�棬ִ�����1��
����Ҳ���Ǳ��ʽֵΪ�٣�ִ�����2��
else��ķ�Χ��if��ͬ��*/
