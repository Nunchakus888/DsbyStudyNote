/*10.07.01
for��if������ʹ�� 
��100���ڿ�������3��˵�ĺ�*/
# include <stdio.h> 
int main ()
{
	int i,sam=0;
	for (i=1;i<=100;++i)
	   {
   		if (i%3 == 0)
   		  sam += i;
   	   }
    printf ("%d\n",sam);
    system ("pause");
	return 0;
}
