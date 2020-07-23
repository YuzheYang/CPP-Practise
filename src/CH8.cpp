#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i< 10; i++)
    {
        printf("This loop will run 10 times. \n");
    }
    int j = 1;
    while (j > 0) {
        if (j == 10) {
            break;
        }
        j++;
        cout << j << endl;
    }
    int k = 0;
    do {
        k++;
        cout << k << endl;
    } while (k < 10);

    return 0;
}