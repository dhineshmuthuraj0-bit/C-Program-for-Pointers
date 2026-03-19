#include <stdio.h>

int main()
{
    int n, i;
    scanf("%d", &n);
    int arr[100];
    for(i=0;i<n;i++) 
        scanf("%d", &arr[i]);
    int *p = arr;
    int max = *p;
    for(i=1;i<n;i++)
    {
        if(*(p+i) > max)
            max = *(p+i);
    }
    printf("%d", max);
    return 0;
}
