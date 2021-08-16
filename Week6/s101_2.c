#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    // จงเขียนโปรแกรมแปล Morse Code ให้เป็นข้อความภาษาอังกฤษ (Level 5)
    char s[512];
    printf("Enter morse code: ");
    scanf("%[^\n]", s);
    int morseIndex = 1;
    char *morseChar = " *ETIANMSURWDKGOHVF?L?PJBXCYZQ??54?3???2??+????16=/?????7???8?90";
    for (size_t i = 0; i <= strlen(s); i++)
    {
        switch (s[i])
        {
        case ' ':
        case '\0':
            printf("%d", morseIndex);
            //printf("%c", morseChar[morseIndex]);
            morseIndex = 1;
            break;
        case '.':
            morseIndex *= 2;
            break;
        case '-':
            morseIndex = morseIndex * 2 + 1;
            break;
        case '/':
            morseIndex = 0;
            break;
        default:
            break;
        }
    }

    return 0;
}