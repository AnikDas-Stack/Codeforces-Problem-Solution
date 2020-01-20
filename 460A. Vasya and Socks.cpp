#include <stdio.h>
int main()
{
    int n, m, temp=0, i;
    scanf("%d %d", &n, &m);

    for(i=1; temp<=n; i++)
    {
        temp=i*m;
        if(temp<=n)
            n+=1;
        else
            break;

    }
    printf("%d\n", n);
    return 0;
}
