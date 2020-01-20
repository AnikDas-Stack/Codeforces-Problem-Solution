#include <stdio.h>
void swap(long long int* a, long long int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
int partition (long long int arr[], int low, int high)
{
    long long int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high- 1; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}
void quicksort(long long int ara[], int low, int high)
{
    if(low<high)
    {
        int pi=partition(ara,low, high);
        quicksort(ara, low, pi-1);
        quicksort(ara, pi+1, high);
    }

}
int main()
{
    long long int d1, d2, d3;
    scanf("%lld %lld %lld", &d1, &d2, &d3);
    long long int ara[]={d1, d2, d3};
    quicksort(ara, 0, 2);

    if(((2*ara[0])+(2*ara[1]))<=(ara[0]+ara[1]+ara[2]))
        printf("%lld\n", ((2*ara[0])+(2*ara[1])));
    else
        printf("%lld\n",(ara[0]+ara[1]+ara[2]) );
    return 0;
}
