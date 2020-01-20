#include <stdio.h>
int partition(int ara[], int low, int high)
{
    int pivot=ara[high];
    int i=low-1;
    for(int j=low; j<high-1; j++)
    {
        if(ara[j]<=pivot)
        {
            i++;
            int temp=ara[i];
            ara[i]=ara[j];
            ara[j]=temp;
        }
    }
    int pepo=ara[i+1];
    ara[i+1]=ara[high];
    ara[high]=pepo;
    return i+1;
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
    int c1, c2, c3, c4, c5;
    scanf("%d %d %d %d %d", &c1, &c2, &c3, &c4, &c5);

    int ara[]={c1, c2, c3, c4, c5};
    quicksort(ara, 0, 4);

    int sum=ara[0]+ara[1]+ara[2]+ara[3]+ara[4];
    if(sum>0 && sum%5==0)
        printf("%d\n", sum/5);
    else
        printf("-1\n");

    return 0;
}
