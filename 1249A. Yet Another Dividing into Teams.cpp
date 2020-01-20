#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int q, n;
    cin>>q;

    for(int i=1; i<=q; i++)
    {
        cin>>n;
        int ara[n], flag=1;

        for(int i=0; i<n; i++)
            cin>>ara[i];

        sort(ara, ara+n);

        for(int i=1; i<n; i++)
        {
            if(ara[i]-ara[i-1]==1)
            {
                flag = 0;
                break;
            }
        }

        if(flag == 1)
            cout<<"1"<<endl;
        else
            cout<<"2"<<endl;
    }

    return 0;
}
