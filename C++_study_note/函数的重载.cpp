/*�������Ϻ�����ȡ��ͬ�ĺ������������βεĸ��������Ͳ�ͬ��
����������ʵ�κ��βε����ͼ��������ƥ�䣬�Զ�ȷ�������ĸ�����������Ǻ���������*/

#include <iostream>
using namespace std;

int add (int, int);
int add (int, int, int);//��add()���أ��βθ�����ͬ 
double add (double, double);//��add()���أ��β����Ͳ�ͬ
double add (double , int); //��add()���أ��β����Ͳ�ͬ����һ����ͬ��Ϊ��ͬ�� 
double add (int, double); //��add()���أ��β����Ͳ�ͬ��˳�����ϸ���ͬ�������ɲ�ͬ�����أ� 
//ע����������ֻ���βκͺ���������������ֵ��
//double add (int, int);Ϊ������������������������Ϻ��������βζ���ͬ�ĺ��� 

int main ()
{
	cout << add (10, 10) << endl;
	cout << add (10, 10, 10) << endl;//�βθ�����ͬ 
	cout << add (10.1, 10.0) << endl;//�β����Ͳ�ͬ 
	cout << add (10.2, 10) << endl;//�β����Ͳ�ͬ 
	cout << add (10, 10.3) << endl;//�β����Ͳ�ͬ 
	
	return 0;
}
 
 int add (int a, int b, int c)
 {
 	return a+b+c;
 }
 
 int add (int a, int c)
 {
 	return a+c;
 }
 
 double add (double a, double c)
 {
 	return a+c;
 }
 
 double add (double a, int c)
 {
 	return a+c;
 }
 
 double add (int a, double c)
 {
 	return a+c;
 }
