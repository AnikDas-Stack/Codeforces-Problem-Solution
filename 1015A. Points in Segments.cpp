#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int ara[n*2];

    for(int i=1; i<=n*2; i++)
        cin>>ara[i];

    int count=0,a=1, res[m];
    for(int i=1; i<=m; i++)
        res[i]=0;


    for(int i=1; i<=m; i++)
    {
        int flag=0;
        for(int j=1; j<n*2; j+=2)
        {
            if(i>=ara[j] && i<=ara[j+1])
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            count++;
            res[a]=i;
            a++;
        }

    }

    cout<<count<<endl;


    for(int i=1, j=count; i<=m; i++)
    {
        if(res[i]!=0)
        {
            if(count==1)
                cout<<res[i]<<endl;
            else
            {
                count--;
                cout<<res[i]<<" ";
            }
        }
    }
    return 0;
}
