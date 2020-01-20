#include <stdio.h>
#include <string.h>
int main()
{
    char s[101];
    scanf("%s", s);
    int length=strlen(s);
    int up=0, low=0;

    for(int i=0; i<length; i++)
    {
        if(s[i]>='A'&&s[i]<='Z')
        {
            up++;
            continue;
        }
        if(s[i]>='a' && s[i]<='z')
        {
            low++;
            continue;
        }
    }
    if(up==low)
    {
        for(int i=0; i<length; i++)
        {
            if(s[i]>='A'&&s[i]<='Z')
            {
                s[i]=s[i]+32;
            }
        }
        printf("%s\n", s);
    }
    else if(up>low)
    {
        for(int i=0; i<length; i++)
        {
            if(s[i]>='a' && s[i]<='z')
            {
                s[i]=s[i]-32;
            }
        }
        printf("%s\n", s);
    }
    else
    {
        for(int i=0; i<length; i++)
        {
            if(s[i]>='A'&&s[i]<='Z')
            {
                s[i]=s[i]+32;
            }
        }
        printf("%s\n", s);
    }
    return 0;
}
