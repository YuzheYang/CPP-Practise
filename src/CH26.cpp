#include <iostream>
//友元函数在继承类中调用private成员
using namespace std;
//基础类
class printData
{
public:
    void print(int i) {
        cout << "整数为: " << i << endl;
    }

    void print(double  f) {
        cout << "浮点数为: " << f << endl;
    }

    void print(char c[]) {
        cout << "字符串为: " << c << endl;
    }
};
//扩展类
class printDataPlus: public printData{
public:
    void printArea(){
        cout << "Here is the area of this function." << endl;
    }
    friend void PrintWidth(printDataPlus pd);
private:
    int width = 10;
};

void PrintWidth(printDataPlus pd) {
        cout << pd.width << endl;
}

int main(void)
{
    printDataPlus pd;

    // 输出整数
    pd.print(5);
    // 输出浮点数
    pd.print(500.263);
    // 输出字符串
    char c[] = "Hello C++";
    pd.print(c);
    pd.printArea();
    PrintWidth(pd);
    return 0;
}