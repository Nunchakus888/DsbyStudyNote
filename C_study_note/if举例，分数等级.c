#include <stdio.h>
int main ()
{
	float score;//score:����
	printf ("������ɼ���\n") ;
	scanf ("%f",&score);
	if (score>100)
	  printf ("���ڰ������ΰ���\n");
    else if (score>=90&&score<=100) /*����д��90>=score=<100 ��
	��Ϊ����������ִ�У�score�Ľ����1��0����ԶС��100��������ˣ� */ 
      printf ("��ϲ�㣡�ɼ��ܺã����㣡\n");
	else if (score>=80&&score<=90) 
	  printf ("���㣡�����н�������أ�\n");
    else if (score>=70&&score<=80)
      printf ("���ã���Ҫ����Ŭ������\n");
    else if (score>=60&&score<=70)
      printf ("���񣡻�Ҫ�ӱ�Ŭ������\n");
    else if (score<0)
	  printf ("��С�Ӳ��а������ܵø�����\n"); 
	else
	  printf ("�������񰡣����Ŭ������\n");

    system ("pause");	
   return 0;
}
