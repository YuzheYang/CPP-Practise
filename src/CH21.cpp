#include <iostream>
using namespace std;

class Line{
public:
    void setLength(double len);
    double getLength(void);
    Line();  // 这是构造函数
    ~Line(void)
    {
        cout << "Object is being deleted" << endl;
    }
    friend void printLength(Line line);
private:
    double length;
};
void printLength(Line line){
    /* 因为 printWidth() 是 Box 的友元，它可以直接访问该类的任何成员 */
    cout << "Length of line : " << line.length << endl;
}
// 成员函数定义，包括构造函数

Line::Line(void){
    cout << "Object is being created" << endl;
}

void Line::setLength(double len){
    length = len;
}

double Line::getLength(void){
    return length;
}
// 程序的主函数
int main(){
    
    Line line;
    // 设置长度

    line.setLength(6.0);
    // 友元函数调用了类
    printLength(line);
    // 直接访问类的私有成员
    cout << "Length of line : " << line.getLength() << endl;
    return 0;
}