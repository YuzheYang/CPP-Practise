#include <iostream>
using namespace std;

int main()
{
    const int  LENGTH = 10;
    const int  WIDTH = 5;
    const char NEWLINE = '\n';
    int area;
    
    //int WIDTH = 10;
    area = LENGTH * WIDTH;
    cout << area;
    cout << NEWLINE;
    return 0;
}