//����static��̬��Ա��������
/*���е�static��Ա�����౾���������κζ��󡤡���������ֱ���ã�����.��Ա��  ����
���ڴ�����о�̬��Ա�ʹ���������һ�����򣬲�����ջ��Ҳ�����ڶ�
*/

class A
{
	public int i=1;
	public static int a=0;
	public static void t()//��̬����ֻ�ܷ��ʾ�̬��Ա
	{
		System.out.printf("��̬a=%d\n\n",a);
		//System.out.printf("%d\n",i);//���󣬾�̬�������ܷ��ʷǾ�̬��Ա
		//b();//���󣬾�̬�������ܷ��ʷǾ�̬��Ա
	}
	public void b()//�Ǿ�̬�������Է��ʾ�̬��Ա
	{
		System.out.printf("�Ǿ�̬a��%d  ",a);
		System.out.printf("�Ǿ�̬i��%d\n\n",i);
		t();//�Ǿ�̬��Ա���Է��ʾ�̬��Ա
	}
}

class java_static 
{
	public static void main (String[] args)
	{
		A aa = new A();
		A bb = new A();
		aa.b();//a=0,i=1����Ĭ��ֵ
		bb.b();//a=0,i=1����Ĭ��ֵ
		System.out.printf("\n\n");
		
		aa.i = 10;
		aa.a = 20;
		aa.b();//a=20,i=10 aa��i�ѱ���ֵ�ı䣬
		bb.b();//a=20,i=1 a�Ǿ�̬��Ա���������ɶ��ٶ���̬��Աһֱ��ֻ��һ��������a�����࣬�����Ǹ�������ʽ����һ��
		A.t();//a=20 ��̬�������ֱ���� ����.��Ա�� ����,
		System.out.printf("\n\n");
		
		bb.i = 30;
		bb.a = 40;
		aa.b();//a=40, i=20 ��һ�������Ա��ֵ�ı䣬��Ӱ��������ɵ���������
		bb.b();//a=40, i=30
		A.t();//a=40
		System.out.printf("\n\n");
		
		A.a = 60;
		A.t();//60
		aa.b();//a=60, i=20 
		bb.b();//a=60, i=30
		
	}
}
