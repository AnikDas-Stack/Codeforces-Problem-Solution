#include <stdio.h>
int main()
{
    int n, m, flag=0;
    scanf("%d %d", &n, &m);


    for(int i=1; i<=n; i++)
    {
        if(i%2 != 0)
        {
            for(int j=1; j<=m; j++)
            {
                printf("#");
            }
            printf("\n");
        }
        if(i%2==0)
        {
            if(flag==0)
            {
                for(int j=1; j<m; j++)
                {
                    printf(".");
                }
                printf("#\n");
                flag=1;
                continue;
            }
            if(flag==1)
            {
                printf("#");
                for(int j=2; j<=m; j++)
                {
                    printf(".");
                }
                printf("\n");
                flag=0;
                continue;
            }
        }
    }
    return 0;
}
