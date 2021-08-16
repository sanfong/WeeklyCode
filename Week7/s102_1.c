#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    // จงเขียนโปรแกรมแปลข้อความภาษาอังกฤษให้เป็น Morse Code (Level 5)
    char morsecode[][6] = {".-",
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
                           "/"};
    char chardic[] = "abcdefghijklmnopqrstuvwxyz1234567890 ";
    char ch;
    printf("Enter text: ");
    while ((ch = getchar()) != '\n')
    {
        if (ch >= '1' && ch <= '9')
        {
            printf("%s ", morsecode[ch-'0'+25]);
        }
        else if (ch == '0')
        {
            printf("%s ", morsecode[35]);
        }
        else if (ch == ' ')
        {
            printf("%s ", morsecode[36]);
        }
        else
        {
            printf("%s ", morsecode[ch-'a']);
        }
    }

    return 0;
}