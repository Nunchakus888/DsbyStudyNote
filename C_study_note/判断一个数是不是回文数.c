# include <stdio.h> 

int main (void)
{
    int val, m, sum=0;
    printf ("��������Ҫ�жϵ�������\n");
    scanf ("%d",&val); 
    
    m = val;
    while (m)
    {
          sum = sum * 10 + m % 10;
          m/=10; 
    }
    /*�������㷨�����̣� 
    ��m=123
    m % 10 =3��sum = 3,->m /10=12->��m=12��m��=0�����´�ѭ�� �� 
    m % 10 =2��sum = 32,->m /10=1->��m=1,m��=0�����´�ѭ�� ��
    m % 10 =1��sum = 321,->m /10=0->��m=0��ֹѭ�� ��
    */
 
    if (sum == val)  
      printf ("������ǻ�������\n");
    else
      printf ("��������ǻ�����\n");
    
    system ("pause");
    return 0;
}
