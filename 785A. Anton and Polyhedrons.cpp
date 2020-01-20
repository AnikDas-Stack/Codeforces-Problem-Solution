#include <stdio.h>
int main()
{
    int n, sum=0;
    char ara[100];
    scanf("%d", &n);

    for(int i=1; i<=n; i++)
    {
        scanf("%s", ara);
        if(ara[0]=='T')
            sum+=4;
        else if(ara[0]=='C')
            sum+=6;
        else if(ara[0]=='O')
            sum+=8;
        else if(ara[0]=='D')
            sum+=12;
        else
            sum+=20;
    }
    printf("%d\n", sum);
    return 0;
}
