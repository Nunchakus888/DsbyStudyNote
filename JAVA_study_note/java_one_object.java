//һ����ֻ����һ������,java��ʾ
//ע��java���޲����ĵĺ���������yy��void����ʽ
class A
{
	public int i;

	private static A aa = new A();//����������һ������aaֻ�����ã�C/C++��ָ�룩��һ��ָ��������͵�һ���ڴ棬�����ڶ��з���
								//���ó�˽��Ϊ�˱�����Ա����ֹ��С���ƻ��ṹ
	public static A getA()//�ú���������ɾ�̬�ģ��͹����ģ���֤�������ܷ��ʣ����Ҳ������ڶ���
	{
		return aa;//�������������ɵ����õ�ַ������������Ҳ�ܷ������������ɵ��Ǹ�����
	}
	private A(){}//�ѹ��캯�����ó�˽�еģ��ⲿ�Ͳ����Է��ʣ�Ҳ��û��ֱ�Ӷ������Ķ���
}

class java_one_object
{
	public static void main (String[] args)
	{
		//A aa = new A();//������Ĺ��캯����˽�еģ����ⲻ�ɷ���
		A aa = A.getA();//�����������ɵĶ���ĵ�ַ����aa
		A bb = A.getA();//�����������ɵĶ���ĵ�ַ����bb,��ʱaa��bb���
		
		if(aa == bb)
		{
			System.out.printf ("aa = bb\n");
		}
		else 
		{
			System.out.printf ("aa != bb\n");
		}
		
		aa.i = 100;
		System.out.printf ("aa.i=%d  bb.i=%d\n",aa.i,bb.i);
	}
}