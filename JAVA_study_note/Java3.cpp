//��C++���̺Ͷ���Աȣ�C++��������ʾ
//�����ε��ܳ������

#include <iostream>
#include <cmath>

using namespace std;

class Sjx
{
	int a,b,c; //˽�г�Ա��C++��class����Ĭ�ϵ���˽�е�
public:			//�����ǹ��г�Ա
	Sjx(int e,int d, int h)// ���캯��
	{
		a=e, b=d, c=h;
	}
	Sjx(){}//���캯��������
	void chushihua(int e,int d, int h)//��ʼ����Ա��������
	{
		a=e, b=d, c=h;	
	}
	int zhouchang()//�����Ͷ������ܳ�����
	{
		return a+b+c;
	}
	double mianji ();//�������������
};

int main()
{
	Sjx s(4,5,6);//�������������S�����ù��캯����ʼ����Ա������
				//��̬��ջ�з���
	cout << s.zhouchang()<<"  "<<s.mianji()<<endl;
	
	Sjx * s1 = new Sjx();//����������ָ��Sjx���ָ��s1
						//���ڶ��ж�̬����һ��Sjx��С���ڴ棬ʹָ��s1ָ������ڴ�
	s1->chushihua (4,5,6);//��ʼ�������Ա
	cout << s1->zhouchang()<<"  "<<s1->mianji()<<endl;
	
	return 0;
}

double Sjx::mianji ()//����������ĺ���
{
	double p = (a+b+c)/2.0;
	return sqrt(p * (p-a) * (p-b) * (p-c));//sqrt��ͷ�ļ�cmath��
}
