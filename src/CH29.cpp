#include <iostream>
using namespace std;

class Adder {
public:
    friend void printTotal(Adder add);
    // ���캯��
    Adder(int i = 0)    {
        total = i;
    }
    // ����Ľӿ�
    void addNum(int number)    {
        total += number;
    }
    // ����Ľӿ�
    int getTotal()    {
        return total;
    };
private:
    // �������ص�����
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