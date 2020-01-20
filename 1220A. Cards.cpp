#include <iostream>
using namespace std;

int main()
{
    long long int n;
    cin>>n;

    char s[n];
    long long int one=0, zero=0;

    for(int i=0; i<n; i++)
        cin>>s[i];

    for(long long int i=0; i<n; i++)
    {
        if(s[i]=='n')
            one++;
        if(s[i]=='z')
            zero++;
    }
    for(long long int i=one; i>0; i--)
    {
        if(i==1 && zero==0)
            cout<<"1"<<endl;
        else
            cout<<"1 ";
    }

    for(long long int i=zero; i>0; i--)
    {
        if(i==1)
            cout<<"0"<<endl;
        else
            cout<<"0 ";
    }

    return 0;
}
