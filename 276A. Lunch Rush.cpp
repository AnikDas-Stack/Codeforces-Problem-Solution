#include <iostream>
using namespace std;

int main()
{
    int n;
    long long int k, f, t, joy, temp;
    cin>>n>>k;

    cin>>f>>t;
    if(t>k)
        joy = (f-(t-k));
    else
        joy = f;

    for(int i=2; i<=n; i++)
    {
        cin>>f>>t;
        if(t>k)
            temp = (f-(t-k));
        else
            temp = f;
        if(temp>joy)
            joy = temp;
    }

    cout<<joy<<endl;
    return 0;
}
