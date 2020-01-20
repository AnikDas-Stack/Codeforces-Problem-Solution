#include <iostream>
using namespace std;

int main()
{
    long long int A, B, count=1;
    cin>>A>>B;

    long long int minimum = min(A, B);

    for(long long int i=1; i<=minimum; i++)
        count=count*i;

    cout<<count<<endl;
    return 0;
}
