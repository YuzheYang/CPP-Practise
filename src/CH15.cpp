#pragma warning(disable:4996)
#include <iostream>
#include <time.h>
using namespace std;

int  main()
{
    time_t curtime;
    time(&curtime);
    printf("��ǰʱ�� = % s", ctime(&curtime));
    return 0;
}