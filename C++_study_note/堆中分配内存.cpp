//���з����ڴ�.cpp

#include <iostream>

using namespace std;

class A 
{
public:
	A(){cout<<"���ù��캯������������\n";}
	~A(){cout<<"���������������ͷŶ���\n";}
};

int main ()
{
	A * p = new A;
	
	delete p;//��û����仰��ʱ�򣬶Զ��еĶ��󲢲����ͷţ������ڴ�й©
	return 0;
}