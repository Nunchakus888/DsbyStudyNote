#include <iostream>
#include <string>

using namespace std;

class cat
{
private :
	string name,color;
	unsigned int age;
protected:
	string from;
public:
	cat(string a, string b, unsigned int i, string c)
	{
		name = a ; color = b ; age = i ; from = c;
	}
	cat(){}
	void initialize (string a, string b, unsigned int i, string c)//��ʼ��
	{
		name = a ; color = b ; age = i ; from = c;
		return ;
	}
	void print ()//��ӡ ���
	{
		cout << "Name is :" << name << "\nColor is :" <<color << "\nAge is :" <<age <<"\n From for :"<<from<<endl;
		return ;
	}
	~cat()
	{
		cout <<"This object �Ѿ����١�"<<endl;
	}
};

int main()
{
	cat i("name", "red", 2, "china");//��̬ջ�з�����󣬲����ó�ʼ�������������ʼ��
	
	// cout << i.name << i.age<<endl;//�����޷�����private��Ա
	//cout << i.from <<endl;//ͬ�������޷�����protected��Ա
	
	i.print();//���Է���public��Ա��

	return 0;
}