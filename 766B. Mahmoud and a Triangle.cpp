#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long

int main()
{
    int n;
    cin>>n;
    ll int arr[n];

    for(int i=0; i<n; i++)
        cin>>arr[i];

    sort(arr, arr+n);

    for(int i=n-1; i>=2; i--)
    {
        ll int a=arr[i], b=arr[i-1], c=arr[i-2];
        if(a+b>c && b+c>a && c+a>b)
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }

    cout<<"NO"<<endl;
    return 0;
}
