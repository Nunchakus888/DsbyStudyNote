# include <stdio.h>
# include <malloc.h>

int main(void)
{
	//int a[5]; //���intռ4���ֽڵĻ����������ܹ�������20���ֽڣ�ÿ�ĸ��ֽڱ�������һ��int������ʹ��
	int len,l;
	int * pArr;
	int i,c;

	//��̬�Ĺ���һά����
	printf("��������Ҫ��ŵ�Ԫ�صĸ���: ");
	scanf("%d", &len);
	pArr = (int *)malloc(len * sizeof(int));  //���ж�̬�Ĺ�����һ��һά����, ��һά�����Ԫ�ظ��������ȣ���len, ���������������pArr, �������ÿ��Ԫ����int����  ������ int pArr[len];
	
	//��һά������в�����  �磺�Զ�̬һά������и�ֵ
	for (i=0; i<len; ++i)
	{
        printf ("����%dԪ�ظ�ֵ��",i+1);
		scanf("%d", &pArr[i]);
    }

	//��λһά����������
	printf("һά�����������:\n");
	for (i=0; i<len; ++i)
		printf("%d\n", pArr[i]);
	printf("%#X  \n",pArr);	
	printf("���������¼ӵ�Ԫ�صĸ���: ");
	scanf("%d", &l);
	c = len + l;
	
	realloc(pArr,c* sizeof(int));//���б�ʾ��pArrָ��ĵ�ַ��� c* sizeof(int)���ֽڣ�Ҳ���ǰѶ�̬�����Ԫ�ظ��������ȣ����c���� 
	printf("%#X \n",pArr);	
	for (i=0; i<len; ++i)
		printf("%d\n", pArr[i]);
	if (l<0) 
	    goto a3;//goto:��ת��䣬ִ�к������ת��a3����ִ��������䡣a3������ţ��������һ����Ч�ı�ʶ��,�����ʶ������һ��":"һ������ں�����ĳ�� 
	do
	{
        printf ("�������ĵ�%dԪ�ظ�ֵ��",i+1);
		scanf("%d", &pArr[i]);
		i++;
    }
    while(i<c);
    a3: 
    printf("������һά�����������:\n");
	for (i=0; i<(len+l); ++i)
		printf("%d\n", pArr[i]);
	
	free(pArr); //�ͷŵ���̬���������
	
    system ("pause"); 
	return 0;
}
/*
realloc�����������÷���realloc��P��A�� A���ֽ����������Ǳ������������ͱ��ʽ��P�Ƕ�̬��������ָ��̬�ڴ��ָ�롣 
                ���壺��P��ָ��Ķ�̬�ռ��С��� A���ֽڡ���ԭ����B���ֽڣ� 
                     A������B����B�������ֵ��(�����У���ʱ����ԭ��ֵ�ᶪʧ)
                     A��С��B,����ǰ��A��С��ֵ. 
*/
