#include <stdio.h>
int main()
{
    long int x;
    int res,count=0;

    scanf("%ld", &x);

    for(int i=5; i>=1; i--)
    {
        if(i<=x)
        {
            res=x/i;
            count+=res;
            x=x%i;
        }
    }
    printf("%d\n", count);
    return 0;
}
