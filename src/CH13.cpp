/*
#include <iostream>

using namespace std;

int main()
{
    int  var1;
    char var2[10];

    cout << "var1 �����ĵ�ַ�� ";
    cout << &var1 << endl;

    cout << "var2 �����ĵ�ַ�� ";
    cout << &var2 << endl;

    return 0;
}*/

#include <iostream>

using namespace std;

int main()
{
    double  var = 20.5;   // ʵ�ʱ���������
    double *ip;        // ָ�����������

    ip = &var;       // ��ָ������д洢 var �ĵ�ַ

    cout << "Value of var variable: ";
    cout << var << endl;

    // �����ָ������д洢�ĵ�ַ
    cout << "Address stored in ip variable: ";
    cout << ip << endl;

    // ����ָ���е�ַ��ֵ
    cout << "Value of *ip variable: ";
    cout << *ip << endl;

    return 0;
}