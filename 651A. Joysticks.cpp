#include <iostream>
using namespace std;

int main()
{
    int first, second;
    cin>>first>>second;

    int mini = min(first, second);
    int maxi = max(first, second);
    int i = 0;

    while(mini != 0 && maxi != 0)
    {
        if(mini == 1 && maxi == 1)
            break;

        i++;

        if(mini == 1)
        {
            mini = mini+1;
            maxi = maxi-2;
        }
        else if(maxi == 1)
        {
            maxi = maxi+1;
            mini = mini-2;
        }
        else if(mini <= maxi)
        {
            mini = mini+1;
            maxi = maxi-2;
        }
        else
        {
            maxi = maxi+1;
            mini = mini-2;
        }
    }
    cout<<i<<endl;
    return 0;
}
