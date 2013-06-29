#include <stdio.h>
#include <malloc.h>

typedef struct Node
{
    int a;
    struct Node * Pleft;
    struct Node * Pright;
}NODE, * PNODE;

PNODE goujian (int);//����������,�������������
void xianxu (PNODE);//�������������
void zhongxu (PNODE);//�������������
void fanzhuan (PNODE);//��ת��������������


int main ()
{
    PNODE p = goujian(3);//����һ��ָ������ڵ�
    //�������ԭ����
    xianxu(p);
    printf ("\n");
    //�������ԭ����
    zhongxu(p);
    printf ("\n");
    //��ת
    fanzhuan(p);

    xianxu(p);
    printf ("\n");
    zhongxu(p);
    printf ("\n");

    return 0;
}
//�������������������������
PNODE goujian (int b)
{
    if (0 != b)
    {
        PNODE p = (PNODE)malloc(sizeof(NODE));
        printf ("����ڵ��ֵ��");
        scanf ("%d", &p->a);
        p->Pleft = goujian(b-1);
        p->Pright = goujian(b-1);
        return p;
    }
    else
    {
        return NULL;
    }
}
//�������������
void xianxu (PNODE p)
{
    if (NULL == p)
    {
        return ;
    }
    else
    {
        printf ("%d  " ,p->a);
        xianxu(p->Pleft);
        xianxu(p->Pright);
        return ;
    }
}
//�������������
void zhongxu (PNODE p)
{
    if (NULL == p)
    {
        return ;
    }
    else
    {
        zhongxu(p->Pleft);
        printf ("%d  " ,p->a);
        zhongxu(p->Pright);
        return ;
    }
}
//��ת��������������
void fanzhuan (PNODE p)
{
    if (NULL == p)
    {
        return ;
    }
    else
    {
        PNODE t = p->Pleft;
        p->Pleft = p->Pright;
        p->Pright = t;

        fanzhuan(p->Pleft);
        fanzhuan(p->Pright);

        return;
    }
}

