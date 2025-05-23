#include <stdio.h>

const int STAR = 15;

void printStar(int count) {
    if (count <= 0)
    {
        printf("星星数量不能小于等于0\n");
        return;
    }
    for (int i = 0; i < count; i++)
    {
        printf("*");
    }
    printf("\n");
}

void hello()
{
    printStar(STAR);

    printf("Hello World!\n");

    printStar(STAR);
}

int main()
{
    hello();
    return 0;
}