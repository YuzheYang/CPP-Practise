#include <iostream>
//ʹ��this ָ�����ָ��������еĺ������е���
using namespace std;

class Box{
public:
    // ���캯������
    Box(double l = 2.0, double b = 2.0, double h = 2.0)
    {
        cout << "Constructor called." << endl;
        length = l;
        breadth = b;
        height = h;
    }
    double Volume()
    {
        return length * breadth * height;
    }
    double printVolume() {
        return this->Volume();
    }

private:
    double length;     // Length of a box
    double breadth;    // Breadth of a box
    double height;     // Height of a box
};

int main(void)
{
    Box Box1(3.3, 1.2, 1.5);    // Declare box1
    Box Box2(8.5, 6.0, 2.0);    // Declare box2
    //���ඨ��Ϊָ��
    Box* ptrBox;                // Declare pointer to a class.

    // �����һ������ĵ�ַ
    ptrBox = &Box1;

    // ���ڳ���ʹ�ó�Ա��������������ʳ�Ա
    cout << "Volume of Box1: " << Box1.printVolume() << endl;
    cout << "Volume of Box1: " << ptrBox->Volume() << endl;

    // ����ڶ�������ĵ�ַ
    ptrBox = &Box2;

    // ���ڳ���ʹ�ó�Ա��������������ʳ�Ա
    cout << "Volume of Box2: " << ptrBox->Volume() << endl;

    return 0;
}