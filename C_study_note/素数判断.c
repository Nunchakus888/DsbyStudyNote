/*ʲô��������*/ 
# include <stdio.h>

int m(int c);
int main(void)
{
    int h;
    char ch;
    do
    {
        printf ("��������Ҫ�жϵ���:");
        scanf ("%d",&h);
        if (m(h))
           printf ("�ǵģ�������\n");
        else
           printf ("���ǵģ�\n");
        printf ("��Ҫ�ж���\nҪ������Y����Ҫ���������������\n");
        scanf (" %c",&ch);
    }
    while ('Y'==ch || 'y'==ch); 
     
    system ("pause");
    return 0;
} 
int m(int c)
{
    int i;
    for (i=2; i<=c;++i)
        if (c % i == 0)
          break;
    if (i == c)
       return 1;
    else
       return 0;
}
