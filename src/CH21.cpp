#include <iostream>
using namespace std;

class Line{
public:
    void setLength(double len);
    double getLength(void);
    Line();  // ���ǹ��캯��
    ~Line(void)
    {
        cout << "Object is being deleted" << endl;
    }
    friend void printLength(Line line);
private:
    double length;
};
void printLength(Line line){
    /* ��Ϊ printWidth() �� Box ����Ԫ��������ֱ�ӷ��ʸ�����κγ�Ա */
    cout << "Length of line : " << line.length << endl;
}
// ��Ա�������壬�������캯��

Line::Line(void){
    cout << "Object is being created" << endl;
}

void Line::setLength(double len){
    length = len;
}

double Line::getLength(void){
    return length;
}
// �����������
int main(){
    
    Line line;
    // ���ó���

    line.setLength(6.0);
    // ��Ԫ������������
    printLength(line);
    // ֱ�ӷ������˽�г�Ա
    cout << "Length of line : " << line.getLength() << endl;
    return 0;
}