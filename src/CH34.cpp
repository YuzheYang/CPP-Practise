#include <iostream>
using namespace std;

//����������ͬ������£����Խ�����䵽��ͬ�������ռ���
// ��һ�������ռ�
namespace first_space {
    void func() {
        cout << "Inside first_space" << endl;
    }
}
// �ڶ��������ռ�
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

    // ���õ�һ�������ռ��еĺ���
    first_space::func();

    // ���õڶ��������ռ��еĺ���
    second_space::func();
    second_space::func2();
    return 0;
}