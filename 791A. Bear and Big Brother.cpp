#include <stdio.h>
int main()
{
    int a, b, year=0;
    scanf("%d%d", &a, &b);

    while(1)
    {
        year++;
        a=a*3;
        b=b*2;
        if(a>b)
        {
            printf("%d\n", year);
            break;
        }
    }
    return 0;
}
