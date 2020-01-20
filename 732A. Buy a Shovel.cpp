#include <stdio.h>
int main()
{
    int k, r, i=1;
    scanf("%d %d", &k, &r);

    while(1)
    {
        int temp=k*i;
        int res=temp%10;

        if(res==0 || res==r)
        {
            printf("%d\n", i);
            return 0;
        }
        i++;
    }
    return 0;
}
