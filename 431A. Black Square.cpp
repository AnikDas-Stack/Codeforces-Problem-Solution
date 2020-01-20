#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int ara[4], sum=0;
    char S[1000000];

    for(int i=0; i<4; i++)
        scanf("%d", &ara[i]);

    scanf("%s", &S);
    int length = strlen(S);

    for(int i=0; i<length; i++)
    {
        char ch = S[i];
        int x = (int)(ch)-48;
        sum = sum+ara[x-1];
    }

    printf("%d\n", sum);
    return 0;
}
