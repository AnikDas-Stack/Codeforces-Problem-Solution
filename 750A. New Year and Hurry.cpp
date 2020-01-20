#include <stdio.h>
int main()
{
    int n, k, i;
    scanf("%d %d", &n, &k);

    int restTime = 240-k;

    for(i=1; i<=n; i++)
    {
        int time = 5*i;
        restTime -=time;

        if(restTime<0)
            break;
    }
    printf("%d\n", i-1);
    return 0;
}
