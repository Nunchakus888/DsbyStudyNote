# include <stdio.h>
# include <stdlib.h>
# include <malloc.h>

typedef struct xuesheng 
{
	char xm[10];
	int xh;
	float fs;
	struct xuesheng * next;
}XS,* PXS;
char ch;

PXS gouzao (void);
int changdu(PXS);
void Fpaixu(PXS, int); 
void Xpaixu(PXS, int);
void shuchu(PXS);

int main (void)
{
	PXS p;
	int a;
	
	p = gouzao();
	a = changdu(p);
	
	if(a > 0)
	{
	  int i;
al:	  printf ("��ѡ����Ҫ������ʽ��\n1.�����Ӵ���С����\n2.��ѧ�Ŵ�С��������\n�������ѡ��");
	  scanf ("%d",&i);
	  switch(i)
	  {
	  	case 1:
	  		Fpaixu(p,a);
	  		break;
	  	case 2:
	  		Xpaixu(p,a);
	  		break;
	  	default:
	  		printf ("�������������ѡ��\n");
	  		goto al;
	  }  
	  
	  shuchu(p);
	}
	else
		printf ("ѧ��Ϊ�㣬�������\n");

	system ("pause");
	return 0;
}

PXS gouzao (void)
{
	int a,i;
	XS t;
	
	PXS p = (PXS)malloc(sizeof(XS));
	if (p==NULL)
	{
		printf ("�ڴ����ʧ�ܣ����������\n");
		exit (-1);
	}
	
	printf ("������༶������������");
	scanf ("%d",&a);
	while ((ch=getchar()) != '\n')
		     continue;
	
	PXS q = p;
	q->next = NULL;
	
	for (i=0; i<a ;++i)	
	{
		PXS pn = (PXS)malloc(sizeof(XS));
		if (pn==NULL)
		{
			printf ("�ڴ����ʧ�ܣ����������\n");
			exit (-1);
		}
		printf ("�������%d��ѧ����������",i+1);
		scanf ("%s",t.xm);
		while ((ch=getchar()) != '\n')
		     continue;
		printf ("�������%d��ѧ����ѧ�ţ�",i+1);
		scanf ("%d",&t.xh);
		while ((ch=getchar()) != '\n')
		     continue;
		printf ("�������%d��ѧ���ķ�����",i+1);
		scanf ("%f",&t.fs);
		while ((ch=getchar()) != '\n')
		     continue;
		t.next = NULL;
		*pn = t;
		q->next=pn;
		q=pn;
	}
	
	return p;
}

int changdu(PXS q)
{
	int a=0;
	PXS p=q->next;
	while(p != NULL)
	{
		a++;
		p = p->next;
	}
	
	return a;
}

void Fpaixu(PXS q, int a)
{
	int j,i;
	XS t;
	PXS h,g;
	PXS p=q->next;
	for (i=0; i<a-1; ++i,p=p->next)
	{
		for(j=i+1,q=p->next; j<a; ++j,q=q->next)
		{
			if (p->fs < q->fs)
				{
				    h = p->next;
                    g = q->next;
                    
					t = *p;
					*p = *q;
					*q = t;
					
					p->next = h;
					q->next = g;
				}
		}
	}
	
	return;
}

void Xpaixu(PXS q,int a)
{
	int j,i;
	XS t;
	PXS h,g;
	PXS p=q->next;
	for (i=0; i<a-1; ++i,p=p->next)
	{
		for(j=i+1,q=p->next; j<a; ++j,q=q->next)
		{
			if (p->xh > q->xh)
				{
				    h = p->next;
                    g = q->next;
                    
					t = *p;
					*p = *q;
					*q = t;
					
					p->next = h;
					q->next = g;
				}
		}
	}
	
	return;
}

void shuchu(PXS q)
{
	PXS p=q->next;
	int i=0;
	while (p != NULL)
	{
		printf ("��%d��ѧ����\nѧ�ţ�%d   ������%s    ������%f\n",i+1,p->xh,p->xm,p->fs);
		++i;
		p = p->next;
	}
	printf ("һ��%d��ѧ����\n",i);
	
	return;
}
