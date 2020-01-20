#include <stdio.h>
int main()
{
    int n, a1,a2,a3,b1,b2,b3, sum_a, sum_b, count_a, count_b;
    scanf("%d %d %d\n%d %d %d\n%d", &a1, &a2, &a3, &b1, &b2, &b3, &n);

    sum_a=a1+a2+a3;
    sum_b=b1+b2+b3;

    if(sum_a%5==0)
        count_a=sum_a/5;
    else
        count_a=(sum_a/5)+1;

    if(sum_b%10==0)
        count_b=sum_b/10;
    else
        count_b=(sum_b/10)+1;

    if((count_a+count_b)<=n)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
