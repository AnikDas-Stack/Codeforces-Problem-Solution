#include <stdio.h>
int main()
{
    int n, k, p, c=0;
    scanf("%d %d", &n, &k);

    for(int i=1; i<=n; i++)
    {
        scanf("%d", &p);
        if((p+k)<=5)
            c++;
    }
    printf("%d\n", c/3);
    return 0;
}
