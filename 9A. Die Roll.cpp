#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin>>a>>b;

    int maxi = max(a, b);
    int temp = (6-maxi)+1;

    if(temp%2 ==1)
    {
        if(temp==3)
            cout<<"1/2"<<endl;
        else
            cout<<temp<<"/6"<<endl;
    }
    else
    {
        if(temp==4)
            cout<<"2/3"<<endl;
        else
            cout<<"1/"<<6/temp<<endl;
    }
    return 0;
}
