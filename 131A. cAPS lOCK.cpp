#include <stdio.h>
#include <string.h>
int main()
{
    char ara[100];
    scanf("%s", ara);
    int length=strlen(ara);
    int flag=0;

    if(length==1)
    {
        if(ara[0]>='a'&&ara[0]<='z')
        {
            ara[0]=ara[0]-32;
            printf("%s\n", ara);
            return 0;
        }
    }

    for(int i=0; i<length; i++)
    {
        if(ara[i]>='A'&&ara[i]<='Z')
        {
            flag=1;
        }
        else
        {
            flag=0;
            break;
        }
    }
    if(ara[0]>='a'&&ara[0]<='z')
    {
        for(int i=1; i<length; i++)
        {
            if(ara[i]>='A'&&ara[i]<='Z')
            {
                flag=2;
            }
            else
            {
                flag=0;
                break;
            }
        }
    }
    if(flag==1)
    {
        for(int i=0; i<length; i++)
            ara[i]=ara[i]+32;
    }
    if(flag==2)
    {
        ara[0]=ara[0]-32;
        for(int i=1; i<length; i++)
            ara[i]=ara[i]+32;
    }
    printf("%s\n", ara);
    return 0;
}
