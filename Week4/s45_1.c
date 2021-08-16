#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int fact(int n)
{
    return (n < 2) ? 1 : n * fact(n-1);
}

int main()
{
    // จงเขียนฟังก์ชั่น factorial (Level 3)
    printf("%d", fact(5));
    return 0;
}