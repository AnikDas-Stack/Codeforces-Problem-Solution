#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    double ara[n], sum=0.0;

    for(int i=0; i<n; i++)
    {
        scanf("%lf", &ara[i]);
        sum+=ara[i]/100;
    }

    printf("%lf\n", (sum/n)*100);
    return 0;
}
