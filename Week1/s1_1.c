#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    // จงเขียนโปรแกรมเพื่อรับค่าตัวเลข 2 ตัว แล้วแสดงผลบวก ลบ คูณ หาร ของตัวเลขทั้งสองตัวนั้น โดยใช้ตัวแปรน้อยที่สุด (Level 1)
    float a, b;
    scanf("%f %f", &a, &b);
    printf("%f\n%f\n%f\n%f", a+b, a-b, a*b, a/b);

    return 0;
}