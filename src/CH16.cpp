
#include <iostream>
#include <cstring>

using namespace std;

// ����һ���ṹ������ Books 
struct Books
{
    char  title[50];
    char  author[50];
    char  subject[100];
    int   book_id;
};

int main()
{
    Books Book1;        // ����ṹ������ Books �ı��� Book1
    Books Book2;        // ����ṹ������ Books �ı��� Book2
    
    char title[10] = "Hello";

    string s;
    s.assign(title);
    cout << s << endl;

    // Book1 ����
    strcpy_s(Book1.title, "C++ �̳�");
    strcpy_s(Book1.author, "Runoob");
    strcpy_s(Book1.subject, "�������");
    Book1.book_id = 12345;

    // Book2 ����
    strcpy_s(Book2.title, "CSS �̳�");
    strcpy_s(Book2.author, "Runoob");
    strcpy_s(Book2.subject, "ǰ�˼���");
    Book2.book_id = 12346;

    // ��� Book1 ��Ϣ
    cout << "��һ������� : " << Book1.title << endl;
    cout << "��һ�������� : " << Book1.author << endl;
    cout << "��һ������Ŀ : " << Book1.subject << endl;
    cout << "��һ���� ID : " << Book1.book_id << endl;

    // ��� Book2 ��Ϣ
    cout << "�ڶ�������� : " << Book2.title << endl;
    cout << "�ڶ��������� : " << Book2.author << endl;
    cout << "�ڶ�������Ŀ : " << Book2.subject << endl;
    cout << "�ڶ����� ID : " << Book2.book_id << endl;

    return 0;
}