/*��ʽ����*/
# include <stdio.h> 
# include <malloc.h>
#include <stdlib.h>

typedef struct node
{
	int a;
	struct node * next;
}NODE, *PNODE;

typedef struct  dl
{
	PNODE front;
	PNODE rear;
}DL, * PDL;

DL gz(void);
bool kong (PDL);
void bl (PDL);
void rd (PDL, int);
void cd (PDL);

int main (void)
{
	DL d = gz();
	PDL p = &d;
	bl(p);
	
	rd(p,10);
	rd(p,9);
	rd(p,8);
	rd(p,7);
	rd(p,6);
	rd(p,5);
	rd(p,4);
	rd(p,3);
	rd(p,2);
	rd(p,1);
	bl(p);
	
	cd(p);
	cd(p);
	cd(p);
	bl(p);
	
	cd(p);
	cd(p);
	cd(p);
	cd(p);
	cd(p);
	cd(p);
	cd(p);
	cd(p);
	bl(p);
	
	system ("pause");
	return 0;
}

DL gz(void)//�������ͷ��� 
{
	DL h;
	PNODE p = (PNODE)malloc(sizeof(NODE));
	p->next = NULL;
	h.front = p;
	h.rear = p;
	return h;
}

bool kong (PDL p)//�ж϶����Ƿ�Ϊ�� 
{
	PNODE q = p->front->next;
	if (NULL == q)
		return true;
	else
		return false;
}

void bl (PDL p)//����������� 
{
	if (kong(p))
	{
		printf ("����Ϊ�գ�\n");
		return ;
	}
	
	PNODE q = p->front->next;
	while (q != NULL)
	{
		printf ("%d   ",q->a);
		q = q->next;
	}
	printf ("\n");
	return ;
}

void rd (PDL p, int i)//��� 
{
	PNODE q = (PNODE)malloc(sizeof(NODE));
	q->a = i;
	q->next = NULL;
	p->rear->next = q;
	p->rear = q;
	return;
}//����ڶ�β������β�ڵ� 

void cd (PDL p)//���� 
{
	if (kong(p))
	{
		printf ("����Ϊ�գ�����ʧ�ܣ�����\n");
		return ;
	}
	else
	{
		int i;
		PNODE q = p->front->next;
		p->front->next = q->next;
		i = q->a;
		free(q);
		printf ("���ӳɹ�������ӵ�Ԫ���ǣ�%d\n",i);
		return ;
	}
}//�ٶ�ͷ�����׽ڵ� 
/*
�˶��е���ʽ�ǣ�
 �ޡ��ޡ��ޡ��ޡ�``````����
�� 						 ��
front					rear
ͷ���					rear->next == NULL 
���������Чֵ�� 
*/