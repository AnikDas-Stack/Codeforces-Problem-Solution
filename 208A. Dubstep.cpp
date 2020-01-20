#include <stdio.h>
#include <string.h>
int main()
{
    char ara[201];
    scanf("%s", ara);

    int length=strlen(ara);
    for(int i=0; i<length; i++)
    {
        if(ara[i]=='W'&& ara[i+1]=='U' && ara[i+2]=='B')
        {
            i=i+2;
        }

        else
        {
            printf("%c", ara[i]);
            if(ara[i+1]=='W' && ara[i+2]=='U' && ara[i+3]=='B')
                printf(" ");
        }
    }
    return 0;
}
