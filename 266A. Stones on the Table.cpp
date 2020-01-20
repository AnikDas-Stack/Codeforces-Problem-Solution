#include <stdio.h>
#include <string.h

int main()
{
    int n;
    scanf("%d", &n);
    char ara[n];

    scanf("%s", ara);
    int count=0;

    for(int i=0; i<n-1; i++)
    {
        if(ara[i]==ara[i+1])
            count++;
    }

    printf("%d\n", count);
    return 0;
}
