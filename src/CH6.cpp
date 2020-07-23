#include <iostream>

int count;
extern void write_extern();

extern int count;

void write_extern(void)
{
    std::cout << "Count is " << count << std::endl;
}

int main()
{
    count = 5;
    write_extern();
    return 0;
}