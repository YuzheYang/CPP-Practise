#include<iostream>
using namespace std;

int main() {
	int i = 16;
	int k = 12;

	//�����൱�ڽ�ʹ������������ʾͬһ��ֵ�����ú�ԭʼ�����ڴ��ַ��ͬ
	//�ŵ㣺���Ӱ�ȫ
	//����ַ�еı������ı���������õ�ֵҲ��ı�
	int& r = i;
	int& n = k;
	cout << i << endl;
	cout << r << endl;
	i = 10;
	cout << i << endl;
	cout << r << endl;
	cout << &i << endl;
	cout << &r << endl;
	cout << "====" << endl;
	cout << k << endl;
	cout << n << endl;
	return 0;
}