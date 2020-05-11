#include <math.h>
#include <stdio.h>

int main()
{

    int num16[100];
    int i = 0;
    num16[0] = 16;
    int cnt = 0;
    while (1)
    {
        char temp = getchar();
        if (temp == '#')
        {
            break;
        }
        else if (temp >= '0' && temp <= '9')
        {
            num16[i] = temp - 48;
            i++;
        }
        else if (temp >= 'A' && temp <= 'F')
        {
            num16[i] = temp - 55;
            i++;
        }
        else if (temp >= 'a' && temp <= 'f')
        {
            num16[i] = temp - 87;
            i++;
        }
        else if (temp == '-')
        {
            if (num16[0] == 16)
            {
                cnt = 1;
            }
        }
    }

    int sum10 = 0;
    int j;
    int k = i - 1;
    for (j = i - 1; j >= 0; j--)
    {
        if (num16[i] == '\0')
        {
            break;
        }
        sum10 += num16[j] * pow(16, k - j);
    }

    if (cnt == 1)
    {
        sum10 = 0 - sum10;
    }

    printf("%d", sum10);

    return 0;
}
