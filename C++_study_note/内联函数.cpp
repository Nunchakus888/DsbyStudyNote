/*����������
	Ϊ�˿˷���������ѹջ��ջ���������ٶȡ� 
	���ã����к�����ģ�黯���㣬����ֱ�Ӵ���������ٶȡ�
	�����������൱�ڰѴ���ֱ��д�ڱ������С� 
*/
#include <iostream> 
using namespace std;

inline int ff (int);//����ʱ����inline�ؼ���

int main (void)
{
	int h = 6;
	h = ff(h);
	printf ("%d\n",h);
	
	return 0;
}

int ff (int a)//����ʱinline�ؼ��ֿ��п��ޡ�����
{
	int p = a;
	p++;
	if (p == a) 
		p *= 6;
	return p;
}
/*ע�⣺
	���������в��ܳ���ѭ����䣨for��while��do����while���Ϳ�����䣨switch��
	�ڵ�����������ǰҪ������
	 ���������������쳣�ӿ����� 
*/
