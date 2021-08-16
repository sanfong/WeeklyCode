#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    // จงเขียนโปรแกรมเพื่อรับค่าตัวเลข 2 ตัว แล้วแสดงผลบวก ลบ คูณ หาร ของตัวเลขทั้งสองตัวนั้น โดยใช้ตัวแปรน้อยที่สุด (Level 1)
    float a[2];
    scanf("%f %f", a, a + 1);
    printf("%f\n%f\n%f\n%f", a[0]+a[1], a[0]-a[1], a[0]*a[1], a[0]/a[1]);

    return 0;
}