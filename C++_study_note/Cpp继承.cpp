//C++�̳�
/*
    ���м̳У����м̳��У�����̳и���ĳ�Ա���������У�����ı�����Ա�͹��г�Ա���Ա��ֲ��䣬�������˽�г�Ա���������޷����ʡ�
    ˽�м̳У�˽�м̳��У�����̳и���ĳ�Ա���������У�����ı�����Ա�͹��г�Ա�����������ж�Ϊ˽�г�Ա�������˽�г�Ա�����޷����ʡ�
    �����̳У�˽�м̳��У�����̳и���ĳ�Ա���������У�����ı�����Ա�͹��г�Ա�����������ж�Ϊ������Ա�������˽�г�Ա�����޷����ʡ�
    C++�У��̳е����Ա仯���Ǳ����͹����ģ�˽�г�Ա����������Զ�޷����ʡ�
	*/
#include <iostream>

using namespace std;

class Human //���常��
{
	double height;
	double weight;
protected:
	int ege;
public:
	inline void sethg(double);
	inline void  setwg (double);
	inline double gethg(void);
	inline double getwg(void);
};

class Student : public Human //���м̳�Human��
{
	double score;

public:
	void sets(double i){score = i; return ;}
	double gets(void){return score;}
	void print (void)
	{
		sethg(32.2);//������Է��ʸ���Ĺ��г�Ա���൱������Ĺ��г�Ա��
			    //����Ǳ����̳У�ͬ�����Է��ʣ��൱������ı�����Ա
			    //�����˽�м̳У�ͬ�����Է��ʡ��൱�������˽�г�Ա
		ege  = 10;//�������ܷ��ʸ���ı�����Ա���൱������ı�����Ա
			   //����Ǳ����̳У�ͬ�����Է��ʣ��൱������ı�����Ա
			    //�����˽�м̳У�ͬ�����Է��ʡ��൱�������˽�г�Ա
	//	cout << height <<endl; �����˽���������޷����ʣ�����ʲô�̳з�ʽ
		cout << score <<endl;
	}
};

int main ()
{
	Student m;
	m.sethg (2.2);//������Ҳ�ܷ��ʸ��๫�м̳й�����
		      //����Ǳ����̳У���������ģ����ⲻ�ܷ��ʱ�����Ա
		      //�����˽�м̳У�ͬ���������ⲻ�ܷ���˽�г�Ա
	m.sets (93.5);
	m.print();
	cout <<m.gethg()<<endl;


	return 0;
}

void Human::sethg (double i)
{
	height = i;
	return ;
}

void Human::setwg(double i)
{
	weight = i;
	return ;
}

double Human::gethg(void){return height;}

double Human::getwg(void){return weight;}
