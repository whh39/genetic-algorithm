#include "GA.h"

int main()
{
    genetic_algorithm();
    cout << "The run time is:" << (double)clock() / CLOCKS_PER_SEC << "s" << endl;
    system("pause");
    return 0;
}