#include <iostream>
using namespace std;

// ��������
int max(int num1, int num2)
{
    // �ֲ���������
    int result;

    if (num1 > num2)
        result = num1;
    else
        result = num2;

    return result;
}

int sum(int a, int b) {
    int sum_result;
    sum_result = a + b;
    return sum_result;
}

int main()
{
    // �ֲ���������
    int a = 100;
    int b = 200;
    int ret, sum_two;

    // ���ú�������ȡ���ֵ
    ret = max(a, b);
    sum_two = sum(a, b);
    cout << "Sum value is :" << sum_two << endl;
    cout << "Max value is : " << ret << endl;

    return 0;
}

// ���������������нϴ���Ǹ���
