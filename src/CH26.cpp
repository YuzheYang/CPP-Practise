#include <iostream>
//��Ԫ�����ڼ̳����е���private��Ա
using namespace std;
//������
class printData
{
public:
    void print(int i) {
        cout << "����Ϊ: " << i << endl;
    }

    void print(double  f) {
        cout << "������Ϊ: " << f << endl;
    }

    void print(char c[]) {
        cout << "�ַ���Ϊ: " << c << endl;
    }
};
//��չ��
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

    // �������
    pd.print(5);
    // ���������
    pd.print(500.263);
    // ����ַ���
    char c[] = "Hello C++";
    pd.print(c);
    pd.printArea();
    PrintWidth(pd);
    return 0;
}