/*ѭ������*/
# include <stdio.h>
# include <stdlib.h>

typedef struct dl
{
	int * a;
	int f;
	int t;
} DL, * PDL;

void gouzao (PDL);//������� 
void rudui (PDL , int);//��� 
void chudui (PDL);//���� 
bool kong(PDL);//�ж��Ƿ�Ϊ�� 
bool isman (PDL);//�ж��Ƿ����� 
void shuchu (PDL );//������� 

int main (void)
{
	DL d;
	gouzao (&d);
	shuchu(&d);
	rudui(&d,10);
	rudui(&d,8);
	rudui(&d,7);
	rudui(&d,6);
	rudui(&d,5);
	rudui(&d,4);
	rudui(&d,3);
	rudui(&d,2);
	rudui(&d,1);
	rudui(&d,0);
	rudui(&d,-1);
	rudui(&d,-2);
	rudui(&d,-3);
	shuchu(&d);
	chudui(&d);
	chudui(&d);
	chudui(&d);
	shuchu(&d);
	

    system ("pause");
    return 0;
}

void gouzao (PDL p)
{
	p->a = (int *)malloc(10*sizeof(int));
	p->f = 0;
	p->t = 0;
	return ;
}

void rudui (PDL p , int i)
{
	if (isman(p))
 	{
 		printf ("��������,���ʧ��!!!\n");
 		return;
	 }
 	else
 	{
	    p->a[p->t] = i;
	    p->t = (p->t + 1)%10;
	    return ;
 	}
    
}

void chudui (PDL p)
{
	if (kong(p))
	{
		printf ("����Ϊ�գ�����ʧ�ܣ�\n");
		return;
	}	
	else
	{
		int i = p->a[p->f];
		p->f = (p->f + 1)%10;
		printf ("���ӳɹ�����ɾ����Ԫ���ǣ�%d\n" , i);
		return ;
	}
}

bool kong(PDL p)
{
	if (p->t == p->f)
	   return true;
 	else
 		return false;
}

bool isman (PDL p)
{
	if ((p->t + 1)%10 == p->f)
		return true;
	else
		return false;
}
void shuchu (PDL p)
{
	if (kong(p))
	{
		printf ("����Ϊ�գ�����ʧ�ܣ�\n");
		return;
	}	
	else
	{
		int i;
		for (i = p->f; i<p->t; i=(i+1)%10)
		{
			printf ("%d   ",p->a[i]);
		}
		printf("\n");	
	}
}

/* 
���У�
      ���壺
            һ�ֿ���ʵ�֡��Ƚ��ȳ����Ĵ洢�ṹ 
      
      ���ࣺ
            ��ʽ����  ����������ʵ�� 
            
            ��̬����  ����������ʵ�� 
                   ��̬����ͨ������ѭ������ 
*/
