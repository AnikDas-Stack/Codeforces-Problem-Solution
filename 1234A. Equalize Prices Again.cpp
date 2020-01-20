#include <iostream>
using namespace std;

int main()
{
    int q, n;
    cin>>q;

    for(int i=1; i<=q; i++)
    {
        cin>>n;
        long long int ara[n], sum=0;
        for(int i=0; i<n; i++)
        {
            cin>>ara[i];
            sum+=ara[i];
        }
        long long temp=sum/n, newSum=0;

        while(newSum<sum)
        {
            newSum=temp*n;
            temp++;
        }
        cout<<temp-1<<endl;
    }
    return 0;
}
