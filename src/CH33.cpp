

#include <iostream>
using namespace std;
//���캯������������
//���Զ��ڶ�̬�ڴ�����
class Box
{
public:
    Box() {
        cout << "���ù��캯����" << endl;
    }
    ~Box() {
        cout << "��������������" << endl;
    }
};

int main()
{
    //�����Box���µ�ָ��newһ���µ��ڴ��ʵ��
    Box* myBoxArray = new Box[2];

    delete[] myBoxArray; // ɾ������

    char* pvalue = NULL;
    pvalue = new char[5];

    char char_copy[] = "Hell";
    int len = strlen(char_copy)+1;
    strcpy_s(pvalue, len, char_copy);

    cout << pvalue << endl;
    delete[] pvalue;
    return 0;
}