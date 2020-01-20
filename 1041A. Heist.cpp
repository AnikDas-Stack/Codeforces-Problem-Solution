#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;
    long long int ara[n], sum=0;

    for(int i=0; i<n; i++)
        cin>>ara[i];

    sort(ara, ara+n);

    for(int i=1; i<n; i++)
        sum+=ara[i]-ara[i-1]-1;

    cout<<sum<<endl;
    return 0;
}
