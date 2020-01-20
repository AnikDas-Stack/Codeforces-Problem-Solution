#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,mx=0,cnt=0,i,x;
    cin>>n;
    map<int,int>mp;
    for(i=0; i<n; i++)
    {
        cin>>x;
        mp[x]++;
        if(mp[x]>mx)
            mx=mp[x];
    }
    cout<<mx<<endl;
    return 0;
}
