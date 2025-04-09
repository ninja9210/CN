#include <stdio.h>
#include <string.h>
int main()
{
    int i, j, cnt, l, count[50] = {0};
    char str[50];
    printf("Enter the string: ");
    scanf("%s", str);                          
    printf("\n\tOriginal String is: %s", str); 
    printf("\n\n\tEncoded String is: ");
    l = strlen(str); 
    for (i = 0; i < l; i++)
    {
        j = i;
        count[i] = 1; 
        do
        {
            j++;
            if (str[j] == str[i])
                count[i]++;
        } while (str[j] == str[i]);
        if (count[i] == 1)
            printf("%c", str[i]); 
        else
        {
            printf("%c%d", str[i], count[i]);
            i += count[i] - 1; 
        }
    }
    return 0;
}