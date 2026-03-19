#include <stdio.h>

int main()
{
    int n,i,x,pos=-1;
    scanf("%d",&n);
    int arr[100];
    for(i=0;i<n;i++) scanf("%d",&arr[i]);
    scanf("%d",&x);
    int *p = arr;
    for(i=0;i<n;i++)
    {
        if(*(p+i) == x)
        {
            pos = i + 1;
            break;
        }
    }
    printf("%d", pos);
    return 0;
}
