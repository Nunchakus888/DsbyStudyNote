# include <stdio.h>
int main (void)
{
	int i;
	float sam = 0;

	for (i=1; i<=100; ++i)
    {
		sam = sam+1.0/i; //��OK�� �Ƽ�ʹ��
			//sum = sum + (float)(1/i); ����д�ǲ��Ե� 
			//Ҳ��������д:  sum = sum + 1 / (float)(i);   ���Ƽ�
		/*ǿ������ת��:
		   ��ʽ���� �������ͣ������ʽ��
		   ���ܣ��ѱ��ʽ��ֵǿ��ת��Ϊǰ����ִ�е��������͡�*/ 
 	}  
    printf ("sam = %f", sam);//float������%f���
    system ("pause"); 
	return 0;
}
