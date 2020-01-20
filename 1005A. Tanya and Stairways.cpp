#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int ara[n];

    for(int i=0; i<n; i++)
        cin>>ara[i];

    int stairCount=1, eachStairHas=1, has[n], a=0;

    for(int i=1; i<n; i++)
    {
        if(ara[i]==1)
        {
            stairCount++;
            has[a]=eachStairHas;
            a++;
            eachStairHas=1;
        }
        else
            eachStairHas++;
    }

    has[a]=eachStairHas;
    has[a+1]=NULL;

    cout<<stairCount<<endl;

    for(int i=0; i<a+1; i++)
    {
        if(i+1==sizeof(has))
            cout<<has[i]<<endl;
        else
            cout<<has[i]<<" ";
    }

    return 0;
}
