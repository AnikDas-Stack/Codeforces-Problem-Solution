#include <stdio.h>
#include <string.h>
int main()
{
    char ara[101];
    scanf("%s", ara);
    int length=strlen(ara);
    int flag=0;

    for(int i=0; i<length; i++)
    {
        int asci=(int)ara[i];
        if(ara[i]=='H' || ara[i]=='Q' || ara[i]=='9' && asci>=33&&asci<=126)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
