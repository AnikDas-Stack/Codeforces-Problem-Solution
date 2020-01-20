#include <iostream>
using namespace std;

int main()
{
    int n, v, k, a=0, counter=0;
    cin>>n>>v;
    int seller[n];
    seller[a]=0;

    for(int i=1; i<=n; i++)
    {
        cin>>k;
        int ara[k];
        for(int j=1; j<=k; j++)
            cin>>ara[j];
        for(int j=1; j<=k; j++)
        {
            if(v>ara[j])
            {
                seller[++a]=i;
                counter++;
                break;
            }
        }
    }
    cout<<counter<<endl;
    for(int b=1; b<=a; b++)
        cout<<seller[b]<<" ";
    cout<<endl;

    return 0;

}
