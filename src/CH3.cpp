
#include <iostream>
using namespace std;

#define LENGTH 10
#define WIDTH  5
#define NEWLINE '\n'

int main()
{

   int area;

   area = LENGTH * WIDTH;
   cout << area;
   cout << NEWLINE;
   return 0;
}

/*
#include <iostream>
using namespace std;

// 全局变量声明
int g = 20;

int main()
{
    // 局部变量声明
    int g = 10;
    cout << g;

    return 0;
}
*/
