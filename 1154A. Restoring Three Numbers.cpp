#include <stdio.h>
int main()
{
    long long int x[4], temp;

    for(int i=0; i<4; i++)
        scanf("%lld", &x[i]);

    for(int i=0; i<4; i++)
    {
        for(int j=0; j<3; j++)
        {
            if(x[j]>x[j+1])
            {
                temp = x[j];
                x[j]=x[j+1];
                x[j+1]=temp;
            }
        }
    }

    printf("%lld %lld %lld\n", x[3]-x[0], x[3]-x[1], x[3]-x[2]);
    return 0;
}
