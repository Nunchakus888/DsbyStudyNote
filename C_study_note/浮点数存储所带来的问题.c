/*
	10.7.3
	�����򲻶ԣ� ��Ϊѭ���и��µı������ܶ���ɸ����ͣ�
	��Ϊfloat��double�����ܱ�֤���Ծ�ȷ�Ĵ洢һ��С������Щֻ��һ������ֵ�� 
*/

# include <stdio.h>

int main(void)
{
	float i;
	float sum = 0;  

	for (i=1.0; i<=100; ++i)
	{
		sum = sum + 1/i;
	}
	printf("sum = %f\n", sum);  

    system ("pause");
	return 0;
}
/*������
    ��һ�������ͱ���x������ж�x��ֵ�Ƿ�Ϊ�㣺
	if ��0 == x���ǣ�
	 else ���ǣ� �����ԣ� 
	 if ��|x-0.000001| <0.000001�����㣻
	 else ���ǣ����ԣ�
	  
*/ 
