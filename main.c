#include<stdio.h>

int main(int argc, char const *argv[])
{
    printf("   |");

    int i,j;

    for (i = 1; i <= 9; i++)
    {
        printf("%3d", i);
    }
    printf("\n");

    for (i = 1; i <= 9; i++)
    {
        printf(" %d |", i);
        for (j = 1; j <= 9; j++)
        {
            printf("%3d", i * j);
        }
        printf("\n");
    }


    return 0;
}
