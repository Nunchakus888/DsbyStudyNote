/*
  while��for�Ĳ�𻥻� 
  Date: 06/07/10 21:58
*/

# include <stdio.h> 
int main (void)
{
 	int i, sum = 0;
 	for (i=1; i<=100; i++)
 	    sum += i;
    printf ("%d\n", sum);
    
    sum = 0;
    
    i = 1;
    while (i<=100)
    {
	 	 sum += i;
		 i++; 
    }
    printf ("%d\n", sum);

 	system ("pause");
 	return 0;
}
/*
for (1;2;3)
    A;
�ȼ��ڣ�
1;
while (2) 
{
      A;
      3;
for���߼���ǿ���������׳��� ���Ƽ�����for�� 
}

*/
