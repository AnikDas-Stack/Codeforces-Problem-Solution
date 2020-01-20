#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int hour[n], minute[n];

    for(int i=0; i<n; i++)
        cin>>hour[i]>>minute[i];

    int count=1, maxi=1;

    for(int i=1; i<n; i++)
    {
        if(hour[i]==hour[i-1] && minute[i]==minute[i-1])
            count++;
        else
        {
            if(count>maxi)
                maxi=count;
            count=1;
        }
    }
    if(count>maxi)
        maxi=count;

    cout<<maxi<<endl;
    return 0;
}
