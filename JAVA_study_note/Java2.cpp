//��C++���̺Ͷ���Աȣ�C++������̱�ʾ����ͬ��C
//�����ε��ܳ������

#include <iostream>
#include <cmath>//C��math

using namespace std;

int zhouchang (int a, int b, int c)
{
	return a+b+c;
}

double mianji (int a, int b, int c)
{
	double p = (a+b+c)/2.0;
	return sqrt(p * (p-a) * (p-b) * (p-c));//sqrt��ͷ�ļ�cmath��
}

int main ()
{
	int a=4, b= 5, c=6;
	cout << zhouchang(a,b,c)<<"  "<<mianji(a,b,c)<<endl;

	return 0;
}