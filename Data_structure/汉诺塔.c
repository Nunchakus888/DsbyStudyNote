# include <stdio.h>

void hnt (int a,char x, char y, char z)
{
	if (1 == a)
	{
		printf ("�ѵ�%d�����Ӵ�%c�Ƶ�%c\n",a,x,z);	
	}
	else 
	{
		hnt (a-1,x,z,y);
		printf ("�ѵ�%d�����Ӵ�%c�Ƶ�%c\n",a,x,z);
		hnt (a-1,y,x,z);
	}
} 

int main (void)
{
	hnt (2,'A','B','C');
	
	return 0;
}
/*
��ŵ����α�㷨 ��
 1.����C��n-1�����Ӵ�A�ƶ���B�� 
 2.ֱ�Ӱ�n��A�ƶ���C��
 3.����A��n-1�����Ӵ�B�ƶ���C�� 
*/
