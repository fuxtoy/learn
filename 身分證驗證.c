#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
int main()
{
    char let[11];
    scanf("%s", let);
    int num1, num2, num3, num4, num5, num6, num7, num8, fff, lll;
    char a, b;
    a = let[0];
    b = let[1];
    int ans, fans;
    num1 = (let[2] - 48) * 7 % 10;
    num2 = (let[3] - 48) * 6 % 10;
    num3 = (let[4] - 48) * 5 % 10;
    num4 = (let[5] - 48) * 4 % 10;
    num5 = (let[6] - 48) * 3 % 10;
    num6 = (let[7] - 48) * 2 % 10;
    num7 = (let[8] - 48) * 1;
    num8 = (let[9] - 48) * 1;
    if (isdigit(a))
    {
        printf("區域碼ERROR\n");
    }
    else
    {
        switch (a)
        {
        case 'A': case 'B': case 'C': case 'D': case 'E': case 'F': case 'G': case 'H': case 'W':
            a = a - 55;
            break;
        case 'I':
            a = a - 39;
            break;
        case 'J': case 'K': case 'L': case 'M': case 'N':
            a = a - 56;
            break;
        case 'O':
            a = a - 44;
            break;
        case 'P': case 'Q': case 'R': case 'S': case 'T': case 'U': case 'V': case 'Z':
            a = a - 57;
            break;
        case 'X': case 'Y':
            a = a - 58;
            break;

        }
    }
    if ((b != 'A') && (b != 'B') && (b != 'C') && (b != 'D'))
    {
        printf("性別碼ERROR\n");
    }
    else
    {
        if (b == 'A')
        {
            b = 0;
        }
        if (b == 'B')
        {
            b = 8;
        }
        if (b == 'C')
        {
            b = 6;
        }
        if (b == 'D')
        {
            b = 4;
        }
    }
    fff = (a / 10) * 1;
    lll = ((a % 10) * 9) % 10;
    ans = fff + lll + b + num1 + num2 + num3 + num4 + num5 + num6 + num7 + num8;
    fans = ans % 10;
    if (fans == 0)
    {
        printf("合格\n");
    }
    else
    {
        printf("不合格\n");
    }
    return 0;
}
