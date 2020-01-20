#include <stdio.h>
#include <string.h>
int main()
{
    char s[101], t[101];
    scanf("%s %s", s, t);

    int len_1=strlen(s);
    int len_2=strlen(t);
    int flag;

    if(len_1 != len_2)
    {
        printf("NO\n");
        return 0;
    }
    else
    {
        for(int i=0, j=len_1-1; i<len_1; i++, j--)
        {
            if(s[i]==t[j])
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
    }
    if(flag==1)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
