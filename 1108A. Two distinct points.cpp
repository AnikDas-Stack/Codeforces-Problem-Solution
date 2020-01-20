#include <iostream>
using namespace std;

int main()
{
    int q;
    long long int a, b, c, d;
    cin>>q;

    for(int i=1; i<=q; i++)
    {
        cin>>a>>b>>c>>d;
        if(a!=c)
            cout<<a<<" "<<c<<endl;
        else if(a!=d)
            cout<<a<<" "<<d<<endl;
        else if(b!=c)
            cout<<b<<" "<<c<<endl;
        else
            cout<<b<<" "<<d<<endl;
    }
    return 0;
}
