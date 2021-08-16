#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    // จงเขียนโปรแกรมเพื่อรับข้อมูลเป็น string ไปเรื่อยๆ จนกว่าจะพิมพ์เครื่องหมาย . หลังจากนั้นให้จัดเก็บข้อมูลลงในไฟล์ชื่อ data.txt (Level 4)
    FILE *fptr;
    char s[256] = "";
    fptr = fopen("data.txt", "w");
    while (1)
    {
        scanf("%s", s);
        fprintf(fptr, s);
        fprintf(fptr, "\n");
        if (s[strlen(s) - 1] == '.')
        {
            break;
        }
    }
    fclose(fptr);
    return 0;
}