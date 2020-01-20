#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ara[n], count_1[n], count_2[n], count_3[n];
    int count_11=0, count_22=0, count_33=0, a=1, b=1, c=1;

    for(int i=1; i<=n; i++)
    {
        scanf("%d", &ara[i]);
        if(ara[i]==1)
        {
            count_11++;
            count_1[a]=i;
            a++;
        }
        else if(ara[i]==2)
        {
            count_22++;
            count_2[b]=i;
            b++;
        }
        else
        {
            count_33++;
            count_3[c]=i;
            c++;
        }
    }
    int min;
    if(count_11>=count_22)
    {
        if(count_22<=count_33)
            min=count_22;
        else
            min=count_33;
    }
    else
    {
        if(count_11<=count_33)
            min=count_11;
        else
            min=count_33;
    }

    printf("%d\n", min);

    for(int j=1; j<=min; j++)
    {
        printf("%d %d %d\n", count_1[j], count_2[j], count_3[j]);
    }
    return 0;
}
