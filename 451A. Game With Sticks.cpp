#include <stdio.h>
int main()
{
    int n, m, i;
    scanf("%d %d", &n, &m);

    if(n>m)
        i=m;
    else
        i=n;

    if(i%2==0)
        printf("Malvika\n");
    else
        printf("Akshat\n");

    return 0;
}
