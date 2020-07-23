#include<iostream>
using namespace std;

int main() {
	int i = 16;
	int k = 12;

	//引用相当于将使用两个变量表示同一个值，引用和原始变量内存地址相同
	//优点：更加安全
	//当地址中的变量被改变后所有引用的值也会改变
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