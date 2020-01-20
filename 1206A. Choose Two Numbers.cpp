#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, m;
    cin>>n;
    int ara1[n];

    for(int i=0; i<n; i++)
        cin>>ara1[i];

    cin>>m;
    int ara2[m];

    for(int i=0; i<m; i++)
        cin>>ara2[i];

    sort(ara1, ara1+n);
    sort(ara2, ara2+m);

    cout<<ara1[n-1]<<" "<<ara2[m-1]<<endl;
    return 0;
}
