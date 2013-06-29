/*ջ*/
# include <stdio.h>
# include <stdlib.h>
# include <malloc.h>

typedef struct node
{
	char a[10];
	int date;
	struct node * next;
}NODE, * PNODE;

typedef struct storck
{
	PNODE ptop;
	PNODE pbottom;
}STORCK, * PSTORCK;

STORCK goujian (void);//����ջ 
void bianli (PSTORCK);//������� 
int kong (PSTORCK);//�ж��Ƿ�Ϊ�� 
void zhujia (PSTORCK);//ѹջ 
int shanchu (PSTORCK, PNODE);//��ջ 
void qingkong (PSTORCK);//���ջ 

int main (void)
{
	STORCK a = goujian();
	PSTORCK p = &a;
	NODE h;
	int i;
	
	bianli(p);
	zhujia(p);
	zhujia(p);
	zhujia(p);
	i = shanchu(p,&h);
	if (i)
	{
		printf("��ɾ����Ԫ�������ǣ�%s   %d\n",h.a, h.date);
	}
	else
	{
		printf ("ջΪ�գ�ɾ��ʧ�ܣ�\n"); 
	} 
	bianli(p);
	qingkong(p);
	bianli(p); 
	
	return 0;
}

STORCK goujian (void)
{
	STORCK a;
	a.ptop = (PNODE)malloc(sizeof(NODE));
	a.ptop->next = NULL;
	a.pbottom = a.ptop;
	return a;
}

void bianli (PSTORCK p)
{
	if (kong(p))
	{
		printf ("��Ҫ�����ջΪ�գ���\n");
	}
	else
	{
		int i=0;
		PNODE q = p->ptop;
		while (p->pbottom != q)
		{
			printf ("��%d��Ԫ���ǣ�",i+1);
			printf ("%s   %d\n",q->a,q->date);
			q = q->next;
			++i;
			
		}
	} 
	return ;
}

int kong (PSTORCK p)
{
	if (p->ptop == p->pbottom)
	{
		return 1;
	}
	else 
	{
		return  0;
	}
}

void zhujia (PSTORCK p)
{
	PNODE q = (PNODE)malloc(sizeof(NODE));
	printf ("���������֣�");
	scanf ("%s",q->a);
	printf ("������ѧ�ţ�");
	scanf ("%d",&q->date);
	q->next = p->ptop;
	p->ptop = q;
	 
	return ;
}

int shanchu (PSTORCK p, PNODE q)
{
	if(kong(p))
	{
		return 0;
	}
	
	PNODE r = p->ptop;
	*q = *r;
	p->ptop = r->next;
	free(r);
	return 1 ;
}

void qingkong (PSTORCK p)
{
	PNODE q ;
	while (p->ptop != p->pbottom)
	{
		q = p->ptop;
		p->ptop = q->next;
		free(q);
	}
	return;
}



/*
ջ��
  ���壺
        һ�ֿ���ʵ���Ƚ�����Ĵ洢�ṹ
        ջ���������� 
  ���ࣺ
        ��̬ջ
        
        ��̬ջ ��������һ���������޵����� 
               
  �㷨��
        ��ջ
        ѹջ����ջ�� 
  
  Ӧ�ã�
   
*/
