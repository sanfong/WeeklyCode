#include <stdio.h>
#include <string.h>
#include <ctype.h>
// Password ของใครปลอดภัยที่สุดให้หาว่าใครตั้ง Password ที่ยากที่จะถูก hack จากผู้ไม่ประสงค์ดีมากที่สุด ระหว่าง Kob, Romtham และ Jojo ตามลำดับ (Level 5)
// -ตัวอักษร a-z อย่างน้อย 1 ตัว
// -ตัวเลข 0-9 อย่างน้อย 1 ตัว
// -ตัวอักษร A-Z อย่างน้อย 1 ตัว
// -ตัวอักษรพิเศษ $ หรือ # หรือ @ อย่างน้อย 1 ตัว
// -ความยาวไม่น้อยกว่า 6 ตัว และ ไม่มากกว่า 12 ตัว

int checkScore(char *pw)
{

    int alpha = 0, ALPHA = 0, num = 0, special = 0, goodlen = 0;
    if (6 <= strlen(pw) && strlen(pw) <= 12)
    {
        goodlen = 1;
    }
    while (*pw != '\0')
    {
        if (islower(*pw))
        {
            alpha = 1;
        }
        if (isupper(*pw))
        {
            ALPHA = 1;
        }
        if (isdigit(*pw))
        {
            num = 1;
        }
        if (*pw == '$' || *pw == '#' || *pw == '@')
        {
            special = 1;
        }
        pw++;
    }
    return alpha + ALPHA + num + special + goodlen;
}

int main()
{
    char strKob[20];
    char strRomtham[20];
    char strJojo[20];
    scanf("%[^,],%[^,],%[^\n]", strKob, strRomtham, strJojo);
    int scoreKob = checkScore(strKob);
    int scoreRomtham = checkScore(strRomtham);
    int scoreJojo = checkScore(strJojo);
    if (scoreKob >= scoreRomtham && scoreKob >= scoreJojo)
    {
        printf("%s (Kob)", strKob);
    }
    else if (scoreRomtham > scoreKob && scoreRomtham >= scoreJojo)
    {
        printf("%s (Romtham)", strRomtham);
    }
    else
    {
        printf("%s (Jojo)", strJojo);
    }
    return 0;
}