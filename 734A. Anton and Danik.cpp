#include <stdio.h>
#include <string.h>
int main()
{
    int n, A=0, D=0;
    scanf("%d", &n);
    char s[n];

    scanf("%s", s);
    int length=strlen(s);

    for(int i=0; i<length; i++)
    {
        if(s[i]=='A')
            A++;
        else
            D++;
    }
    if(A>D)
        printf("Anton\n");
    else if(D>A)
        printf("Danik\n");
    else
        printf("Friendship\n");

    return 0;
}
