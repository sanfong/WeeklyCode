#include <stdio.h>

int main()
{
    // รับค่า n แล้วปริ้นรูป X ออกมา
    int n;
    scanf("%d", &n);

    if (n <= 0) {
        printf("Error");
        return 0;
    }

    for (int i = -n; i <= n; i++) {
        for (int j = -n; j <= n; j++) {
            if (i == j || i == -j) putchar('*');
            else putchar(' ');
        }
        putchar('\n');
    }
}