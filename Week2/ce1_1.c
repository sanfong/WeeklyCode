#include <stdio.h>

void printmul(char c, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%c", c);
    }
}

int main()
{
    // รับค่า n แล้วปริ้นรูป X ออกมา
    int n;
    scanf("%d", &n);
    if (n <= 0)
    {
        printf("Error");
        return 0;
    }
    int midspace = n*2 - 1;
    int leftspace = n;
    for (int i = 0; i < n; i++)
    {
        printmul(' ', i);
        printf("*");
        printmul(' ', midspace-i*2);
        printf("*\n");
    }
    printmul(' ', n);
    printf("*\n");
    for (int i = n-1; i >= 0; i--)
    {
        printmul(' ', i);
        printf("*");
        printmul(' ', midspace-i*2);
        printf("*\n");
    }

    return 0;
}