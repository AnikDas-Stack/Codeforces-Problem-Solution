#include <iostream>
using namespace std;

int main()
{
    int n, i;
    cin>>n;
    long long int ara[n];

    for(int i=1; i<=n; i++)
        cin>>ara[i];

    for(i=1; i<n; i++)
    {
        if(ara[i]%2==0)
            cout<<ara[i]-1<<" ";
        else
            cout<<ara[i]<<" ";
    }
    if(ara[i]%2==0)
        cout<<ara[i]-1<<endl;
    else
        cout<<ara[i]<<endl;
    return 0;
}
