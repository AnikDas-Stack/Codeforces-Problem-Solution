#include <stdio.h>
int main()
{
    int n, h;
    scanf("%d %d", &n, &h);
    int ara[n], sum=0;
    for(int i=0; i<n; i++)
    {
        scanf("%d", &ara[i]);
        if(ara[i]>h)
            sum+=2;
        else
            sum++;
    }
    printf("%d\n", sum);
    return 0;
}
