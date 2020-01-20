#include <iostream>
#include <cmath>
using namespace std;
#define ll long long

int checker(ll int l)
{
    int flag=0;
    for(ll int i=2; i<=sqrt(l); i++)
    {
        if(l%i == 0)
        {
            flag=1;
            return flag;
        }
    }
    return flag;
}

int main()
{
    ll int n, l, r;
    int flag1, flag2;
    cin>>n;

    for(l=2, r=n-2; l<=r; l++, r--)
    {
        if(l+r==n)
        {
            flag1 = checker(l);
            flag2 = checker(r);
            if(flag1==1 && flag2==1)
            {
                cout<<l<<" "<<r<<endl;
                return 0;
            }
        }
    }
    return 0;
}
