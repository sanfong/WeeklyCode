#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int fact(int n)
{
    int temp = 1;
    for (size_t i = 1; i <= n; i++)
    {
        temp *= i;
    }
    return temp;
}

int main()
{
    // จงเขียนฟังก์ชั่น factorial (Level 3)
    printf("%d", fact(1));
    return 0;
}