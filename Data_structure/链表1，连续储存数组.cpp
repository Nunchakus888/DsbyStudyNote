# include <stdio.h>
# include <malloc.h>  //������malloc����
# include <stdlib.h>  //������exit����,��system���� 

//������һ���������ͣ����������͵����ֽ���struct Arr, ���������ͺ���������Ա���ֱ���pBase, len, cnt
struct Arr
{
	int * pBase; //�洢���������һ��Ԫ�صĵ�ַ
	int len; //�����������ɵ����Ԫ�صĸ���
	int cnt; //��ǰ������ЧԪ�صĸ���
};

void init_arr(struct Arr * pArr, int length); //��ʼ������ 
bool append_arr(struct Arr * pArr, int val); //׷��Ԫ�� 
bool insert_arr(struct Arr * pArr, int pos, int val); //�����в���ֵ
bool delete_arr(struct Arr * pArr, int pos, int * pVal);//ɾ�� 
int get();
bool is_empty(struct Arr * pArr);//�ж������Ƿ�Ϊ�� 
bool is_full(struct Arr * pArr);//�ж������Ƿ����� 
void sort_arr(struct Arr * pArr);//���������� 
void show_arr(struct Arr * pArr); //������� 
void inversion_arr(struct Arr * pArr);//�����鵹�� 

int main(void)
{
	struct Arr arr;
	int val;
	
	init_arr(&arr, 6);
	show_arr(&arr);
	append_arr(&arr, 1);
	append_arr(&arr, 10);
	append_arr(&arr, -3);
	append_arr(&arr, 6);
	append_arr(&arr, 88);
	append_arr(&arr, 11);
	if ( delete_arr(&arr, 4, &val) )
	{
		printf("ɾ���ɹ�!\n");
		printf("��ɾ����Ԫ����: %d\n", val);
	}
	else
	{
		printf("ɾ��ʧ��!\n");
	}
/*	append_arr(&arr, 2);
	append_arr(&arr, 3);
	append_arr(&arr, 4);
	append_arr(&arr, 5);
	insert_arr(&arr, -1, 99);
	append_arr(&arr, 6);
	append_arr(&arr, 7);
	if ( append_arr(&arr, 8) )
	{
		printf("׷�ӳɹ�\n");
	}
	else
	{
		printf("׷��ʧ��!\n");
	}
*/	
	show_arr(&arr);
	inversion_arr(&arr);
	printf("����֮�������������:\n");
	show_arr(&arr);
	sort_arr(&arr);
	show_arr(&arr);

	//printf("%d\n", arr.len);

    system("pause");
	return 0;
}

void init_arr(struct Arr * pArr, int length)
{
	pArr->pBase = (int *)malloc(sizeof(int) * length);//���䶯̬�ڴ棬�������� 
	if (NULL == pArr->pBase)//�ж��Ƿ����ɹ� 
	{
		printf("��̬�ڴ����ʧ��!\n");
		exit(-1); //��ֹ��������
	}
	else
	{
		pArr->len = length;//ȷ���������������ɵ�Ԫ�ظ����� 
		pArr->cnt = 0;//ȷ����ЧԪ�ظ�������Ϊ����û��ʼ����ֵ������Ϊ0 
	}
	return;
}

bool is_empty(struct Arr * pArr)//�ж������Ƿ�Ϊ�� 
{
	if (0 == pArr->cnt)//�ж�Ԫ���м�����ЧԪ�� 
		return true;//��Ϊ����Ϊ������ 
	else
		return false;		
}

bool is_full(struct Arr * pArr)//�ж������Ƿ����� 
{
	if (pArr->cnt == pArr->len)//�ж��Ƿ���ЧԪ�ص������Ԫ����� 
		return true;//��������ˣ������� 
	else
		return false;
}

void show_arr(struct Arr * pArr)//�������
{
	if ( is_empty(pArr) )   
	{
		printf("����Ϊ��!\n");
	}
	else
	{
		for (int i=0; i<pArr->cnt; ++i)
			printf("%d  ", pArr->pBase[i]); //��������Ԫ������ 
		printf("\n");
	}
}

bool append_arr(struct Arr * pArr, int val)//������׷��ֵ 
{
	if ( is_full(pArr) )//�ж������Ƿ������������Ͳ�����׷���ˣ�����false
		return false;

	//����ʱ׷��
	pArr->pBase[pArr->cnt] = val; //��ЧԪ����pArr->cnt��������������±����0~��pArr->cnt-1�� ������Ҫ׷��Ԫ�ص��±�Ҳ����pArr->cnt 
	(pArr->cnt)++;//��Ϊ������׷����һ��Ԫ�أ�������ЧԪ��pArr->cnt ҲӦ����Ӧ��һ�� 
	return true;
}

bool insert_arr(struct Arr * pArr, int pos, int val)//�ڵ�pos��Ԫ�ص�ǰ�����val��ֵ 
{
	int i;

	if (is_full(pArr))
		return false;

	if (pos < 1 || pos > pArr->cnt+1)//�ж������pos�Ƿ�Ϸ� ��pos��ֵ��1��ʼ������ܳ����������ܴ������������ 
		return false;

	for (i = pArr->cnt-1; i >= pos-1; --i)//�в���λ�ú������Ԫ������ƣ�ΪҪ����Ԫ���ڳ�λ�á� 
	{
		pArr->pBase[i+1] = pArr->pBase[i];//Ҫ��ǰ���ֵ��������� 
	}
	pArr->pBase[pos-1] = val;//��Ҫ�����ֵ�����ڳ��Ŀռ䡣 
	(pArr->cnt)++;//�м���������ݣ���Чֵ��Ӧ���ӡ��� 
	return true;
}

bool delete_arr(struct Arr * pArr, int pos, int * pVal)//ɾ����pos��Ԫ��ǰ��ֵ����������ɾ��ֵ������ 
{
	int i;

	if ( is_empty(pArr) )//�ж��Ƿ�Ϊ�����飬 
		return false;//��Ϊ�վͻ��޷�ִ��ɾ���������˺��������ش���ֵ 
	if (pos<1 || pos>pArr->cnt)//�ж�pos�Ƿ�Ϸ���Ԫ��������1~pArr->cnt��������Ӧ����1������pArr->cnt 
		return false;//�����Ϸ������޷�ִ��ɾ�������������������ش���ֵ�� 

	*pVal = pArr->pBase[pos-1];//�ȱ���Ҫɾ����ֵ 
	for (i=pos; i<pArr->cnt; ++i)
	{
		pArr->pBase[i-1] = pArr->pBase[i]; 
	}//ִ��ɾ��.��Ҫɾ����Ԫ�غ��Ԫ��ǰ�ƣ������Ͱ�Ҫɾ����ֵ�鶫�����ˡ�����
	pArr->cnt--;//��Ϊ������Ԫ�ر�ɾ��һ����������ЧԪ�ؾ���һ�� 
	return true;
}

void inversion_arr(struct Arr * pArr)//������Ԫ�ص��� 
{
	int i = 0;
	int j = pArr->cnt-1;
	int t;

	while (i < j)
	{
		t = pArr->pBase[i];
		pArr->pBase[i] = pArr->pBase[j];
		pArr->pBase[j] = t;
		++i;
		--j;
	}
	return;
}

void sort_arr(struct Arr * pArr)//��Ԫ�ش�С�������� 
{
	int i, j, t;

	for (i=0; i<pArr->cnt; ++i)
	{
		for (j=i+1; j<pArr->cnt; ++j)
		{
			if (pArr->pBase[i] > pArr->pBase[j])
			{
				t = pArr->pBase[i];
				pArr->pBase[i] = pArr->pBase[j];
				pArr->pBase[j] = t;
			}
		} 
	}
	return ; 
}
