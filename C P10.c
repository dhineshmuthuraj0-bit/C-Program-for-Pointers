#include <stdio.h>

int main()
{
    char str[200];
    fgets(str,200,stdin);
    int count = 1;
    char *p = str;
    while(*p)
    {
        if(*p == ' ')
            count++;
        p++;
    }
    printf("%d", count);
    return 0;
}
