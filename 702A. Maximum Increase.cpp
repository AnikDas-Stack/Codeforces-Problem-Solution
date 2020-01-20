#include <iostream>
using namespace std;

int main()
{
    int n, count=1, maxi=0;
    cin>>n;
    long long int ara[n];
    cin>>ara[0];

    for(int i=1; i<n; i++)
    {
        cin>>ara[i];
        if(ara[i]>ara[i-1])
            count++;
        else
        {
            if(count>maxi)
                maxi=count;
            count=1;
        }
    }
    if(count>maxi)
        maxi=count;

    cout<<maxi<<endl;
    return 0;
}
