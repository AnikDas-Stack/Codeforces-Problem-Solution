#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int ara[4], mini, maxi;

    for(int i=0; i<4; i++)
        cin>>ara[i];

    sort(ara, ara+4);

    int sum=ara[0]+ara[1]+ara[2];

    if(sum<ara[3])
    {
        cout<<"NO"<<endl;
        return 0;
    }

    mini = min(sum, ara[3]);
    maxi = max(sum, ara[3]);

    int i=0;

    while(maxi>=mini)
    {
        if(maxi == mini)
        {
            cout<<"YES"<<endl;
            return 0;
        }
        maxi = maxi-ara[i];
        mini = mini+ara[i];
        i++;
    }
    cout<<"NO"<<endl;
    return 0;
}
