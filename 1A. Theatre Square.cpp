#include <stdio.h>
#include <math.h>
int main()
{
    long long int  n, m, a, x, y;
    scanf("%lld %lld %lld", &n, &m, &a);

    x=n/a;
    y=m/a;
    if(n % a != 0)
        x++;
    if(m%a != 0)
        y++;

    printf("%lld\n", x*y);
    return 0;
}
