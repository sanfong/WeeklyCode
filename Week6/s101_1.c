#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

char morsetochar(char *code)
{
    char morsecode[][6] = { ".-",
                           "-...",
                           "-.-.",
                           "-..",
                           ".",
                           "..-.",
                           "--.",
                           "....",
                           "..",
                           ".---",
                           "-.-",
                           ".-..",
                           "--",
                           "-.",
                           "---",
                           ".--.",
                           "--.-",
                           ".-.",
                           "...",
                           "-",
                           "..-",
                           "...-",
                           ".--",
                           "-..-",
                           "-.--",
                           "--..",
                           ".----",
                           "..---",
                           "...--",
                           "....-",
                           ".....",
                           "-....",
                           "--...",
                           "---..",
                           "----.",
                           "-----",
                           "/" };
    char chardic[] = "abcdefghijklmnopqrstuvwxyz1234567890 ";
    for (size_t i = 0; i < 37; i++)
    {
        if (strcmp(code, morsecode[i]) == 0)
        {
            return chardic[i];
        }
    }
}

int main()
{
    // จงเขียนโปรแกรมแปล Morse Code ให้เป็นข้อความภาษาอังกฤษ (Level 5)
    char s[512];
    printf("Enter morse code: ");
    scanf("%[^\n]", s);
    char morse[6] = "";
    for (size_t i = 0; i <= strlen(s); i++)
    {
        if (s[i] == ' ' || s[i] == '\0')
        {
            printf("%c", morsetochar(morse));
            strcpy(morse, "");
            continue;
        }
        strncat(morse, &s[i], 1);
    }

    return 0;
}