/*
#include<iostream>
using namespace std;

int main() {
    double balance[5] = { 1000.0, 2.0, 3.4, 7.0, 50.0 };
    for (int i = 0; i < 5; i++) {
        cout << balance[i] << endl;
    }
    balance[4] = 30.0;
    cout << balance[4] << endl;
    return 0;
}

*/

#include <iostream>
using namespace std;
#include <iomanip>
using std::setw;
int main()
{
    int n[10]; // n ��һ������ 10 ������������

    // ��ʼ������Ԫ��          
    for (int i = 0; i < 10; i++) {
        n[i] = i + 100; // ����Ԫ�� i Ϊ i + 100
    }
    cout << "Element" << setw(13) << "Value" << endl;
    // ���������ÿ��Ԫ�ص�ֵ                     
    for (int j = 0; j < 10; j++){
        cout << setw(7) << j << setw(13) << n[j] << endl;
    }
    return 0;
}