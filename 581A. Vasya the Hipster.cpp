#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    if(a<b)
    {
        printf("%d ", a);
        b=b-a;
        printf("%d\n", b/2);
    }
    else if(b<a)
    {
        printf("%d ", b);
        a=a-b;
        printf("%d\n", a/2);
    }
    else
    {
        printf("%d 0\n", a);
    }
    return 0;
}
