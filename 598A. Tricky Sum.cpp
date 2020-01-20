#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        __int64 n,i;

        cin>>n;
         __int64 ans=((n+1)*n)/2-2;

        for( int i=1;pow(2,i)<=n;i++)
        {
            ans = ans - pow(2,i+1);
        }
        cout<<ans<<endl;
    }
    return 0;
}
