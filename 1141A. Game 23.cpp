#include <iostream>
using namespace std;

int main()
{
    int n, m, count=0;
    cin>>n>>m;

    if(m%n != 0)
    {
        cout<<"-1"<<endl;
        return 0;
    }

    for(int temp = m/n; temp !=1; )
    {
        if(temp%2 == 0)
        {
            count++;
            temp = temp/2;
        }
        else if(temp%3 == 0)
        {
            count++;
            temp = temp/3;
        }
        else
        {
            cout<<"-1"<<endl;
            return 0;
        }
    }
    cout<<count<<endl;
    return 0;
}
