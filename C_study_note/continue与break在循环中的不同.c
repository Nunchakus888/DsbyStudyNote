//break��continue��ѭ���е����� 
# include <stdio.h>

int main (void)
{
    int i;
    for (i=0;i<=7;++i)
      {
         if (i == 4)
           continue ;
         else 
          printf ("%d\n",i);
      }//continue ��������ѭ�� 
      
      for (i=0;i<=7;++i)
      {
         if (i == 4)
           break ;
         else 
          printf ("%d\n",i);
      }//break����ȫ��ѭ�� 
      
    system ("pause");
    return 0;
}
