#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, coin=0, mini;
    cin>>n;
    long long int ara[n];

    for(int i=0; i<n; i++)
        cin>>ara[i];

    sort(ara, ara+n);

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(ara[j]>=ara[i])
                coin += (ara[j]-ara[i])%2;
            else
                coin += (ara[i]-ara[j])%2;
        }


        if(i==0)
            mini=coin;
        else
        {
            if(coin<mini)
                mini=coin;
        }
        coin=0;
    }

    cout<<mini<<endl;
    return 0;
}
