#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXSIZE 100
int main()
{
    char *p, *q;
    char in[MAXSIZE];
    char stuff[MAXSIZE];
    char destuff[MAXSIZE];
    int count = 0;
    printf("Enter the input character string (0's & 1's only):\n");
    scanf("%s", in);

    p = in;
    q = stuff;
    while (*p != '\0')
    {
        if (*p == '0')
        {
            *q = *p;
            q++;
            p++;
        }
        else
        {
            while (*p == '1' && count < 5)
            {
                count++;
                *q = *p;
                q++;
                p++;
            }
            if (count == 5)
            {
                *q = '0'; 
                q++;
            }
            count = 0;
        }
    }
    *q = '\0';
    printf("\nThe stuffed character string is: %s\n", stuff);

    p = stuff;
    q = destuff;
    count = 0;
    while (*p != '\0')
    {
        if (*p == '0')
        {
            *q = *p;
            q++;
            p++;
        }
        else
        {
            while (*p == '1' && count < 5)
            {
                count++;
                *q = *p;
                q++;
                p++;
            }
            if (count == 5 && *p == '0')
            {
                p++; // Removing the stuffed '0'
            }
            count = 0;
        }
    }
    *q = '\0';
    printf("\n The destuffed character string is: %s\n", destuff);
    return 0;
}