#include <stdio.h>
int main()
{
    int n, i;
    scanf("%d", &n);

    if(n==1)
    {
        printf("I hate it\n");
        return 0;
    }
    else
    {
        for(i=1; i<n; i++)
        {
            if(i%2!=0)
                printf("I hate that ");
            else
                printf("I love that ");
        }
        if(i%2!=0)
            printf("I hate it\n");
        else
            printf("I love it\n");
    }
    return 0;
}
