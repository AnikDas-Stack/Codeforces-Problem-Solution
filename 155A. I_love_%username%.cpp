#include <stdio.h>
int main()
{
    int n, count=0;
    scanf("%d", &n);
    int ara[n];

    for(int i=0; i<n; i++)
    {
        scanf("%d", &ara[i]);

        if(i>=1)
        {
            int boro=0, choto=0;
            for(int j=0; j<i; j++)
            {
                if(ara[i]>ara[j])
                    boro++;
                else if(ara[i]<ara[j])
                    choto++;
            }
            if(boro==i || choto==i)
                count++;
        }

    }
    printf("%d\n", count);
    return 0;
}
