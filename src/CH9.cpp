#include <iostream>
using namespace std;

// 函数声明
int max(int num1, int num2)
{
    // 局部变量声明
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
    // 局部变量声明
    int a = 100;
    int b = 200;
    int ret, sum_two;

    // 调用函数来获取最大值
    ret = max(a, b);
    sum_two = sum(a, b);
    cout << "Sum value is :" << sum_two << endl;
    cout << "Max value is : " << ret << endl;

    return 0;
}

// 函数返回两个数中较大的那个数
