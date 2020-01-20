#include <stdio.h>
int main()
{
    int n, sum=0, i=1, count=0;
    scanf("%d", &n);
    while(1)
    {
        sum+=i;
        if(sum<=n)
        {
            count++;
            n=n-sum;
        }

        else
            break;
        i++;
    }
    printf("%d\n", count);
    return 0;
}
