
 
class cat
{
//private˽�г�Ա��ֻ�������еĺ�������
	private String name;
	private String color;
	private int age;
//protected������Ա��Java�б�����Ա�԰�����Ҳ���Է��ʣ���C++��ͬ
	protected  String from;
// public�ǹ��г�Ա���ⲿ�ӿڣ�����������Է��ʡ�
	public cat(String a, String b, int i, String c)
	{
		name = a ; color = b ; age = i ; from = c;
	}
	public cat(){}
	public void initialize (String a, String b, int i, String c)//��ʼ��
	{
		name = a ; color = b ; age = i ; from = c;
		return ;
	}
	public void print ()//��ӡ ���
	{
		System.out.printf("Name is %s\nColor is %s\nAge is %s\n Form for %s.",name , color , age, from);
		return ;
	}
}; 

class java���ʿ���1
{
	public static void main(String[] args)
	{
		cat i = new cat("name", "red", 2, "china");//�ڶ��ж�̬�������i�����ù��캯�������ʼ����
		i.print();//public�����������
		// i.name = "hello" ;//����private(˽��)�������������
		i.from = "USA" ; //��ȷ�����C++�в�ͬ��C+�б�����Աͬ��������������ʣ�java�ܡ�
		i.print();
		return ;
	}
}

/* 
Java�з������η�����д������C++��ͬ���������ʿ��Ʒ���û��˳��
Java�ģ�
class ����
{
	private ��Ա˵��;//˽�г�Ա ��ֻ�������еĺ�������
	private ��Ա˵��;
	������������ //ÿ����Ա��Ҫ�������Ͽ��Ʒ�
	
	protected ��Ա˵��; //������Ա ��Java�б�����Ա�԰�����Ҳ���Է��ʣ���C++��ͬ
	protected ��Ա˵��; 
	������������//ÿ����Ա��Ҫ�������Ͽ��Ʒ�
	
	public ��Ա˵��;//���г�Ա�� ���ⲿ�ӿڣ�����������Է��ʡ�
	public ��Ա˵��;
	������������//ÿ����Ա��Ҫ�������Ͽ��Ʒ�
};

*/
/*
C++��
class ������
		{
			public://���¶��ǹ��г�Ա��ֱ�������������������¸����ʿ��Ʒ���ð��(:)����ʡ
					���г�Ա���ⲿ�ӿڣ���//�κ��ⲿ���������Է��ʡ�
			private:    //������������ƺ�������˽�г�Ա���ؼ���private����ʡ�ԡ����¶���˽�г�Ա��ֱ�������������������¸����ʿ��Ʒ���ð��(:)����ʡ
					˽�г�Ա��  //ֻ�������еĺ������ʡ�
			protected://���¶��Ǳ�����Ա��ֱ�������������������¸����ʿ��Ʒ���ð��(:)����ʡ
					�����ͳ�Ա��  //��private���ƣ����ⲻ�ɷ��ʣ�����ڼ̳к�����ʱ���������Ӱ�첻ͬ��
		} ��
 */
