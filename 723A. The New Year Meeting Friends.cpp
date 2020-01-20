#include <stdio.h>
int main()
{
    int x1, x2, x3;
    scanf("%d%d%d", &x1, &x2, &x3);

    int ara[]={x1, x2, x3};

    for(int i=0; i<3; i++)
        for(int j=0; j<2; j++)
        {
            if(ara[j]>ara[j+1])
            {
                int temp=ara[j];
                ara[j]=ara[j+1];
                ara[j+1]=temp;
            }
        }
    printf("%d\n", (ara[1]-ara[0])+(ara[2]-ara[1]));
    return 0;
}
