#include <stdio.h>

int main()
{
    char str[100];
    fgets(str, 100, stdin);
    char *p = str;
    int count = 0;
    while(*p)
    {
        if(*p=='a'||*p=='e'||*p=='i'||*p=='o'||*p=='u'||
           *p=='A'||*p=='E'||*p=='I'||*p=='O'||*p=='U')
            count++;
        p++;
    }
    printf("%d", count);
    return 0;
}
