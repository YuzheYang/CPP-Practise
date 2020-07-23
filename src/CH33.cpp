

#include <iostream>
using namespace std;
//构造函数和析构函数
//测试对于动态内存的理解
class Box
{
public:
    Box() {
        cout << "调用构造函数！" << endl;
    }
    ~Box() {
        cout << "调用析构函数！" << endl;
    }
};

int main()
{
    //给这个Box类下的指针new一个新的内存和实例
    Box* myBoxArray = new Box[2];

    delete[] myBoxArray; // 删除数组

    char* pvalue = NULL;
    pvalue = new char[5];

    char char_copy[] = "Hell";
    int len = strlen(char_copy)+1;
    strcpy_s(pvalue, len, char_copy);

    cout << pvalue << endl;
    delete[] pvalue;
    return 0;
}