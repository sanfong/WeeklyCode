#include <stdio.h>

float Sqrt(float n)
{
    float g = 0;
    while (g * g < n)
    {
        g += 0.03125f;
        if (g * g == n)
            return g;
    }
    g -= 0.03125f;
    float last = (n < 1) ? 1 : n;
    for (int i = 0; i < 1000; i++)
    {
        float temp = g;
        g = g + ((last - g) / 2);
        float dt = n - (temp * temp);
        float dl = n - (last * last);
        dt = (dt < 0) ? -dt : dt;
        dl = (dl < 0) ? -dl : dl;
        if (dt < dl)
        {
            last = temp;
        }
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