#include <iostream>
using namespace std;

int main()
{
    int y, b, r, sum;
    cin>>y>>b>>r;

    while(1)
    {
        if(r-1<=b && r-2<=y)
        {
            sum=r+(r-1)+(r-2);
            break;
        }

        else
            r--;
    }

    cout<<sum<<endl;
    return 0;
}
