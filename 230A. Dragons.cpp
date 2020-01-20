#include <iostream>
using namespace std;

int main()
{
    int s, n;
    cin>>s>>n;
    int strangth[n], bonus[n];

    for(int i=0; i<n; i++)
        cin>>strangth[i]>>bonus[i];

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n-1; j++)
        {
            if(strangth[j]>strangth[j+1])
            {
                int temp = strangth[j];
                strangth[j] = strangth[j+1];
                strangth[j+1] = temp;

                temp = bonus[j];
                bonus[j] = bonus[j+1];
                bonus[j+1] = temp;
            }
        }
    }

    int flag=1;

    for(int i=0; i<n; i++)
    {
        if(s<=strangth[i])
        {
            flag=0;
            break;
        }
        else
            s+=bonus[i];
    }

    if(flag==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}
