#include <stdio.h>
int main()
{
    long long int n, div, numberOfBill=0;
    int dollarSet[]={100, 20, 10, 5, 1};
    scanf("%lld", &n);

    int i=0;
    while(n != 0)
    {
        div = n/dollarSet[i];
        n = n%dollarSet[i];
        numberOfBill += div;
        i++;
    }

    printf("%lld\n", numberOfBill);
    return 0;
}
