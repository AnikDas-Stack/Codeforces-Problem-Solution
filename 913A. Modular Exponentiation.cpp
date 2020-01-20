#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n,m;
    cin>>n>>m;
    if(n>27){
        cout<<m<<endl;
    }
    else{
        int x=pow(2,n);
        x=m%x;
        cout<<x<<endl;
    }
    return 0;
}
