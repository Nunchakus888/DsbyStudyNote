# include <stdio.h>
 
int main ()
{
    int a=8;
    char ch = 'j';
    double h = 102.0152;
    int * p =&a;
    char * q = &ch;
    double * r = & h;
    
    printf ("%d   %d   %d\n",sizeof(a),sizeof(char),sizeof(h)); 
    printf ("%d  %d  %d\n",sizeof(p),sizeof(q),sizeof(r));
    /*sizeof()���÷���sizeof���������ͻ������
    ���ܣ����㣨���ڵ��������ͻ������ռ���ֽ�����������*/
    system ("pause");
    return 0;
}
/*
   ָ�����ֻ���������������ֽڵı�ţ�ֻռ4���ֽ� 
  ָ���������˵����ָ��ָ��ı����ľ��峤��
  ָ������洢���Ǳ������ֽڵı�����ţ��������Ĵ�С�޹� 
*/
