#include <iostream>
using namespace std;

//函数名字相同的情况下，可以将其分配到不同的命名空间下
// 第一个命名空间
namespace first_space {
    void func() {
        cout << "Inside first_space" << endl;
    }
}
// 第二个命名空间
namespace second_space {
    void func() {
        cout << "Inside second_space" << endl;
    }
    void func2() {
        cout << "This is from the second inside space..." << endl;
    }
}
int main()
{

    // 调用第一个命名空间中的函数
    first_space::func();

    // 调用第二个命名空间中的函数
    second_space::func();
    second_space::func2();
    return 0;
}