#include <stdio.h>
void swap(int *a, int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
int partition(int ara[], int low, int high)
{
    int pivot=ara[high];
    int i=low-1;
    for(int j=low; j<high; j++)
    {
        if(ara[j]<=pivot)
        {
            i++;
            swap(&ara[i], &ara[j]);
        }
    }
    swap(&ara[i+1], &ara[high]);
    return (i+1);
}
void quicksort(int ara[], int low, int high)
{
    if(low<high)
    {
        int pi=partition(ara, low, high);
        quicksort(ara, low, pi-1);
        quicksort(ara, pi+1, high);
    }
}
int main()
{
    int k, sum=0, count=0, flag=0;
    scanf("%d", &k);
    int ara[12];
    for(int i=0; i<12; i++)
        scanf("%d", &ara[i]);
    quicksort(ara, 0, 11);

    if(k==0)
        printf("0\n");
    else
    {
        for(int i=11; i>=0; i--)
        {
            sum+=ara[i];
            count++;
            if(sum>=k)
            {
                flag=1;
                 break;
            }
        }
        if(flag==1)
            printf("%d\n", count);
        else
            printf("-1\n");
    }
    return 0;
}
