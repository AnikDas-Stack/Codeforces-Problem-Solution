#include <stdio.h>
int main()
{
    long long int s[4], temp[4];

    for(int i=0; i<4; i++)
        scanf("%lld", &s[i]);

    temp[0]=s[0];
    int a=0;
    for(int i=1; i<4; i++)
    {
        int flag;
        for(int j=0; j<=a; j++)
        {
            if(temp[j]!=s[i])
            {
                flag=1;
                continue;
            }
            else
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
        {
            a++;
            temp[a]=s[i];
        }
    }
    printf("%d\n", 4-(a+1));
    return 0;
}
