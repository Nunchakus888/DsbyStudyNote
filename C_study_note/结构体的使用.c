/*�ṹ���ʹ��:ͨ�����������������*/
# include <stdio.h>
# include <conio.h>

struct yy 
{
       int b;
       float c;
};

void shuruy (struct yy *);
//void shuchuy (struct yy);
void shuchuy (struct yy *);

int main (void)
{
    struct yy h,y;
    shuruy (&h);
    shuchuy (&h);
    //shuchuy (h)
    y = h;//�ṹ���໥��ֵ. 
    shuchuy (&y);
    
    system ("pause");
    return 0;
}
 
void shuruy (struct yy *p)//������뷢�͵�ַ���ܸı� 
{
    char ch;
    
    printf ("����ѧ�ţ�");
    scanf ("%d",&p->b);
    
    while ( (ch=getchar()) !='\n')
          continue;
          
    printf ("����ɼ���"); 
    scanf ("%f",&p->c); 
    return ;
}

/*void shuchuy (struct yy hy)//�����������Ҳ���� 
{
   printf ("%c  %d  %f\n",hy.a,hy.b,hy.c); 
   return ; 
}
*/

void shuchuy (struct yy *p)//��һ�㻹�Ƿ��͵�ַ 
{
   printf ("����ǣ�%d  %f\n",p->b,p->c); 
   return ; 
}/*
���͵�ַ���ŵ㣺1.���ٵĴ������� 2.�����ڴ�С 3.ִ���ٶȸ��죬
�ṹ��������ɽ��мӼ��˳����㡣�����໥��ֵ�� 
*/
