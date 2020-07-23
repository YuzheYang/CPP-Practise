#include <iostream>
using namespace std;

class Adder {
public:
    friend void printTotal(Adder add);
    // 构造函数
    Adder(int i = 0)    {
        total = i;
    }
    // 对外的接口
    void addNum(int number)    {
        total += number;
    }
    // 对外的接口
    int getTotal()    {
        return total;
    };
private:
    // 对外隐藏的数据
    int total;
};

void printTotal(Adder add) {
    cout << add.total << endl;

}

int main()
{
    Adder a;

    a.addNum(10);
    a.addNum(20);
    a.addNum(30);
    printTotal(a);
    cout << "Total " << a.getTotal() << endl;
    return 0;
}