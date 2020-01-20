#include <stdio.h>
int main()
{
    int n, m, c, mis=0, chr=0;
    scanf("%d", &n);

    for(int i=1; i<=n; i++)
    {
        scanf("%d %d", &m, &c);
        if(m>c)
            mis++;
        if(c>m)
            chr++;
    }
    if(mis>chr)
        printf("Mishka\n");
    else if(chr>mis)
        printf("Chris\n");
    else
        printf("Friendship is magic!^^\n");

    return 0;
}
