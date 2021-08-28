#include <stdio.h>
#include <math.h>

float Sqrt(float n)
{
    float g = 0.5f;
    for (int i = 0; i < 100; i++)
    {
        g = (g + n / g) / 2;
    }
    return g;
}

int main()
{
    // จงเขียนฟังก์ชัน sqrt โดยไม่ใช้ไลบรารี math.h (Level 1)
    float n;
    scanf("%f", &n);
    printf("%f", Sqrt(n));
    
    return 0;
}