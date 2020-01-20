#include <iostream>
using namespace std;

int main()
{
    int q;
    cin>>q;
    long long int a, b, n, S, temp;

    for(int i=1; i<=q; i++)
    {
        cin>>a>>b>>n>>S;

        temp = min(S/n, a);
        temp = S-temp*n;

        if(temp<=b)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
