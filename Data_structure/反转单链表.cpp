/*��ת������
2010.10.05
�Լ�д�ģ��㷨������*/
#include <stdio.h>
#include <malloc.h>

typedef struct lianbiao
{
	int a;
	struct lianbiao * next;
} LB, * PLB;

PLB gouzao (void);//�������� 
void bianli (PLB);//����������� 
int changdu (PLB);//�����������Ч���� 
void fanzhuan (PLB);//��ת����  
int kong (PLB);//�ж������Ƿ�Ϊ�գ�

int main(void)
{
	PLB p = gouzao();
	bianli(p);
	fanzhuan(p);
	bianli(p);
	
	return 0;
}

PLB gouzao (void)//�������� 
{
	PLB p = (PLB)malloc(sizeof(LB));//����ͷ��㣬���ڲ��� 
	PLB t = p;
	int i;
	t->next = NULL;
	for (i=0; i<=10; ++i)//������Ч�ڵ㲢��ֵ 
	{
		PLB q = (PLB)malloc(sizeof(LB));
		q->a = i;
		q->next = NULL;
		t->next = q;
		t = q;
	}
	
	return p; 
}

void bianli (PLB p)//����������� 
{
	if (kong(p))
	{
		printf ("����Ϊ�գ�\n");
		return;
	}
	
	PLB q = p->next;
	while (NULL != q)
	{
		printf ("%d  ",q->a);
		q = q->next;
	}
	printf ("\n");
	 
	return ;
}

int changdu (PLB p)//�����������Ч���� 
{
	PLB q = p->next;
	int i = 0;
	while (NULL != q)
	{
		i++;
		q = q->next;
	}
	
	return i;
}

void fanzhuan (PLB p)//��ת���� 
{
	if (kong(p))
	{
		printf ("����Ϊ�գ���תʧ�ܣ�\n");
		return;
	}
	int i = changdu(p);
	int j = 0;
	PLB * a = (PLB *)malloc(i * sizeof(PLB));//����ָ�����飬���ָ������ڵ��ָ�� 
	PLB q = p->next;
	int t;
	while (NULL != q)//��ָ����ڵ��ָ��������� 
	{
		a[j] = q;
		q = q->next;
		j++;
	}
	for (j=0,i-=1;j<i;j++,i--)//��ת���������� 
	{
		t = a[i]->a;
		a[i]->a = a[j]->a;
		a[j]->a = t;
	}
	free (a);
	
	return ;
}

int kong(PLB p)//�ж������Ƿ�Ϊ�գ�
{
	PLB q = p->next;
	if (NULL == q) 
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
