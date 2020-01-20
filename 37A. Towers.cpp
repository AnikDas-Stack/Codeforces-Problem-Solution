#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, count=1, maxi=0, tower=1;
    cin>>n;
    int ara[n];

    for(int i=0; i<n; i++)
        cin>>ara[i];

    sort(ara, ara+n);

    for(int i=0; i<n-1; i++)
    {
        if(ara[i]==ara[i+1])
            count++;
        else
        {
            if(count>maxi)
                maxi=count;
            count=1;
            tower++;
        }
    }
    if(count>maxi)
        maxi=count;

    cout<<maxi<<" "<<tower<<endl;
    return 0;
}
