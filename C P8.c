#include <stdio.h>

int main()
{
    char s1[100], s2[50];
    scanf("%s", s1);
    scanf("%s", s2);
    char *p1 = s1;
    char *p2 = s2;
    while(*p1) p1++;
    while(*p2)
    {
        *p1 = *p2;
        p1++;
        p2++;
    }
    *p1 = '\0';
    printf("%s", s1);
    return 0;
}
