#include <stdio.h>
int main()
{
    int n, m, result;
    scanf("%d %d", &n, &m);

    if(m>n)
        printf("-1\n");
    else
    {
        if(n%2==0)
            result=n/2;
        else
            result=(n/2)+1;

        while(result%m!=0)
        {
            result++;
        }
        printf("%d\n", result);
    }
    return 0;
}
