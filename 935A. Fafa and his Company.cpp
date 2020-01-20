#include <iostream>
using namespace std;

int main()
{
    int n, count=0;
    cin>>n;
    int limit=n/2;

    for(int i=1; i<=limit; i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}
