/*ָ�뾭�����̣�����2������*/
# include <stdio.h> 

void huhuan_1(int , int);
void huhuan_2(int *, int *);
void huhuan_3(int *, int *);
void hh(int * p,int *q);

int main()
{
    int a =3,b=5;
    
    huhuan_1(a,b); 
    printf ("%d,%d\n",a,b);
    
    huhuan_2(&a, &b);
    printf ("%d,%d\n",a,b);
     
    huhuan_3(&a, &b); //huhuan_2(*p, *q); �Ǵ����, huhuan_2(a, b);Ҳ�Ǵ����
    printf ("%d,%d\n",a,b);
    
    system ("pause");
    return 0;
}
//������ɻ�������
void huhuan_1(int a, int b)
{
	int t;

	t = a;
	a = b;
	b = t;

	return;
}

//������ɻ�������
void huhuan_2(int * p, int * q)
{
	int * t;//���Ҫ����p��q��ֵ����t������int *,������int,��������

	t = p;
	p = q;
	q = t;
}

//������ɻ�������
void huhuan_3(int * p, int * q)
{
	int t; //���Ҫ����*p��*q��ֵ, ��t���붨���int,���ܶ����int *, �����﷨����

	t = *p;  //p��int *,  *p��int
	*p = *q;
	*q = t;
}
   /*��ͳ������
   int t;
   t = a;
   a = b;
   b = t;*/ 
