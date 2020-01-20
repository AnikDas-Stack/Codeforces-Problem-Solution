#include <iostream>
using namespace std;

int main()
{
    long long int n, k;
    cin>>n>>k;

    long long int count = n/k;

    if(count%2==0)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;

    return 0;
}
