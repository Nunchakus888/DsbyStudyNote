/*��̬����һ�����ѧ����Ϣ�Ľṹ������
Ӣ��ѧ�ò��ã�����������ƴ������ĸ*/
# include <stdio.h>
# include <malloc.h>

struct xs
{
       char mz[100];
       int xh;
       float fs;
};

void sr (struct xs * ,int );
void px (struct xs * ,int );
void sc (struct xs * ,int );

int main (void)
{
    char ch;
    int s;    
    printf ("������ѧ������");
    scanf ("%d",&s); 
    while ( (ch=getchar()) !='\n')
         continue;
    struct xs * p = (struct xs *)malloc(s*sizeof(struct xs ));
    
    sr (p,s);
    px (p,s);
    sc (p,s);
    free (p);
    system ("pause");//dev c++����ģ���Ҫ�������ֹһ�������� 
    return 0;
}

void sr (struct xs * q,int h)//���� 
{
     int i;
     char ch;
     for (i=0;i<h;++i)
    {
        printf ("��%d��ѧ������Ϣ��\n",i+1);
        printf ("ѧ���ǣ�");
        scanf ("%d",&q[i].xh);
        while ( (ch=getchar()) !='\n')
              continue;
        printf ("�����ǣ�");
        scanf ("%s",q[i].mz);//����ȡ��ַ����mz������������������ŵ���������Ԫ�صĵ�ַ 
        while ( (ch=getchar()) !='\n')
              continue;
        printf ("�����ǣ�");
        scanf ("%f",&q[i].fs);
        while ( (ch=getchar()) !='\n')
              continue;
    }
    return ;
}

void px (struct xs * q,int h)//���� 
{
     struct xs t;
     int i,j;
     for (i=0; i<h-1; ++i)
     {
         for (j=0; j<h-1-i; ++j)
         {
             if (q[j].fs < q[j+1].fs)
             {
                t = q[j];
                q[j] = q[j+1];
                q[j+1] = t;
             }
         }
     }
     return ;
}

void sc (struct xs * q,int h)//��� 
{
     int i;
     for (i=0; i<h; i++)
         printf ("%d  %s  %f\n",q[i].xh,q[i].mz,q[i].fs);
         
     return ;
}
