#include <iostream>
using namespace std;

int main()
{
    long long int n;
    cin>>n;
    int ara[]={8, 4, 2, 6};

    if(n==0)
        cout<<"1"<<endl;
    else
     (n%4==0)?(cout<<ara[3]<<endl):(cout<<ara[(n%4)-1]<<endl);
    return 0;
}
