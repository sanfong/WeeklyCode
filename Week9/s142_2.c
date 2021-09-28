#include <stdio.h>
// Password ของใครปลอดภัยที่สุดให้หาว่าใครตั้ง Password ที่ยากที่จะถูก hack จากผู้ไม่ประสงค์ดีมากที่สุด ระหว่าง Kob, Romtham และ Jojo ตามลำดับ (Level 5)
// -ตัวอักษร a-z อย่างน้อย 1 ตัว
// -ตัวเลข 0-9 อย่างน้อย 1 ตัว
// -ตัวอักษร A-Z อย่างน้อย 1 ตัว
// -ตัวอักษรพิเศษ $ หรือ # หรือ @ อย่างน้อย 1 ตัว
// -ความยาวไม่น้อยกว่า 6 ตัว และ ไม่มากกว่า 12 ตัว

int checkScore(char *pw)
{
    int alpha = 0, ALPHA = 0, num = 0, special = 0, goodlen = 0, len = -1;
    while (*(pw + len + 1) != '\0')
    {
        if ('a' <= *(pw + (++len)) && *(pw + len) <= 'z' && !alpha)
        {
            alpha = 1;
        }
        if ('A' <= *(pw + len) && *(pw + len) <= 'Z' && !ALPHA)
        {
            ALPHA = 1;
        }
        if ('0' <= *(pw + len) && *(pw + len) <= '9' && !num)
        {
            num = 1;
        }
        if ((*(pw + len) == '$' || *(pw + len) == '#' || *(pw + len) == '@') && !special)
        {
            special = 1;
        }
    }
    if (6 <= len && len <= 12)
    {
        goodlen = 1;
    }
    return alpha + ALPHA + num + special + goodlen;
}

int main()
{
    char str[3][20];
    char names[3][8] = {"Kob", "Romtham", "Jojo"};
    scanf("%[^,],%[^,],%[^\n]", str[0], str[1], str[2]);
    int most = 0;
    int most_score = checkScore(str[most]);
    for (size_t i = 1; i < 3; i++)
    {
        int current_score = checkScore(str[i]);
        if (current_score > most_score)
        {
            most = i;
            most_score = current_score;
        }
    }
    printf("%s (%s)", str[most], names[most]);
    return 0;
}