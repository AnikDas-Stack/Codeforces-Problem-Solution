#include <stdio.h>
int main()
{
    int n, police=0, count=0, input;
    scanf("%d", &n);

    for(int i=1; i<=n; i++)
    {
        scanf("%d", &input);
        if(input==-1 && police==0)
        {
            count++;
            continue;
        }
        if(input==-1 && police!=0)
        {
            police--;
            continue;
        }
        if(input>-1)
        {
            police+=input;
            continue;
        }
    }
    printf("%d\n", count);
    return 0;
}
