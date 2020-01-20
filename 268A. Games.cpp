#include <stdio.h>
int main()
{
    int n, counter=0;
    scanf("%d", &n);
    int home[n], guest[n];

    for(int i=0; i<n; i++)
        scanf("%d %d", &home[i], &guest[i]);

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(guest[i]==home[j])
                counter++;
        }
    }

    printf("%d\n", counter);
    return 0;
}
