#include <stdio.h>

int main (void)
{
    char str[80];
    printf("문장 입력 : ");
    scanf("%s", str);
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 'a' - 'A';
        }
        else continue;
    }
    printf("바뀐 문장 : %s\n", str);

    return 0;
}
