//��C++���̺Ͷ���Աȣ�java��ʾ
//�����ε��ܳ������

class Sjx //������������
{
	int a;
	int b;
	int c;
	int zhouchang () //a b c�����ʹ˺���ͬ��һ���࣬�ʣ�����Ҫ�β�
	{       			//Java�к���Ҳ�з���
		return a+b+c;
	}
	double mianji ()
	{
		double p=(a+b+c)/2.0;
		return Math.sqrt(p * (p-a) * (p-b) * (p-c));
		//Javaû��ͷ�ļ������ÿ��з����� ����.����
	}
}
//java����ȫ����������ԣ����в�����Ҫ�����н��С�
class Java1  //�������Ҫ���ļ�����һ�£��������п��ܴ���
{
	public static void main (String[] args) //��ڣ�������ôд
	{
		Sjx g = new Sjx();//�����Ͷ������g��
		g.a=4;
		g.b=5;
		g.c = 6;
		System.out.printf ("%d  %f",g.zhouchang(), g.mianji());
	}
}
//������������javac����ʱҪ�����ļ���������ʱҪ����java������
//һ��Ѻ���������������ļ�������һ��