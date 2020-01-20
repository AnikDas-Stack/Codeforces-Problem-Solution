#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int ara[n], sum=0;

    for(int i=0; i<n; i++)
    {
        cin>>ara[i];
        sum+=ara[i];
    }
    int dif = sum/(n/2);

    for(int i=0; i<n; i++)
    {
        if(ara[i]!=0)
        {
            for(int j=0; j<n; j++)
            {
                if(ara[i]+ara[j]==dif && i!=j)
                {
                    cout<<i+1<<" "<<j+1<<endl;
                    ara[i]=0;
                    ara[j]=0;
                }

            }
        }
    }
    return 0;
}
