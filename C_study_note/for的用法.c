/*FOR1�ӵ�10������*/
# include <stdio.h>
#include <conio.h>

int main ()
{
	int i;
	int sum = 0;
    for(i=1;i<=9;i+=2)// i+=2�ȼ���i=i+2 
      sum = sum + i;
    printf ("%d\n",sum);
    getchar ();
	return 0;
}
