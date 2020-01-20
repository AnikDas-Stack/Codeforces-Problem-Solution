#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    long long int ara[n], sum=0;

    for(int i=0; i<n; i++)
    {
        cin>>ara[i];
        sum+=ara[i];
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n-1; j++)
        {
            if(ara[j]<ara[j+1])
            {
                long long int temp = ara[j];
                ara[j]=ara[j+1];
                ara[j+1]=temp;
            }
        }
    }
    long long int temp = sum;

    for(int i=n-1; i>=0; i--)
    {
        if(temp%2==0)
        {
            cout<<temp<<endl;
            return 0;
        }
        else
            temp=sum-ara[i];
    }
    cout<<"0"<<endl;
    return 0;
}
