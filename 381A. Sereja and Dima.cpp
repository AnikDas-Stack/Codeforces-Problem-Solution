#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int ara[n];

    for(int i=0; i<n; i++)
        cin>>ara[i];

    int sereja=0, dima=0;
    for(int first=0, last=n-1, id=1; first<=last; id++)
    {
        if(id%2 !=0 )
        {
            if(ara[first]>=ara[last])
            {
                sereja+=ara[first];
                first++;
            }
            else
            {
                sereja+=ara[last];
                last--;
            }
        }
        else
        {
            if(ara[first]>=ara[last])
            {
                dima+=ara[first];
                first++;
            }
            else
            {
               dima+=ara[last];
               last--;
            }

        }
    }

    cout<<sereja<<" "<<dima<<endl;
    return 0;
}
