#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n, m, q,resN, resM;
    long long y;
    cin>>n>>m;

    string str1[n], str2[m], temp;

    for(int i=0; i<n; i++)
    {
        cin>>temp;
        str1[i]=temp;
    }

    for(int i=0; i<m; i++)
    {
        cin>>temp;
        str2[i]=temp;
    }

    cin>>q;
    for(int i=1; i<=q; i++)
    {
        cin>>y;
        resN=y%n;
        resM=y%m;

        if(resN==0 && resM==0)
            cout<<str1[n-1]+str2[m-1]<<endl;
        else if(resN==0)
            cout<<str1[n-1]+str2[resM-1]<<endl;
        else if(resM==0)
            cout<<str1[resN-1]+str2[m-1]<<endl;
        else
            cout<<str1[resN-1]+str2[resM-1]<<endl;
    }
    return 0;
}

