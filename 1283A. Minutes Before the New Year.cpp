#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=1; i<=t; i++)
    {
        int h, m;
        cin >> h >> m;

        if(h==0)
            cout<<1440-m<<endl;
        else if(m==0)
            cout<<(24-h)*60<<endl;
        else
            cout<<(60-m)+((24-(h+1))*60)<<endl;
    }
    return 0;
}
