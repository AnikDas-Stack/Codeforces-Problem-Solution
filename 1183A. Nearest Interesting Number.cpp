#include <iostream>
using namespace std;

int main()
{
    int a, sum=0;
    cin>>a;
    int temp=a;

    while(a>=0)
    {
        if(a==0)
        {
            if(sum%4==0)
            {
                cout<<temp<<endl;
                return 0;
            }
            else
            {
                temp+=1;
                a=temp;
                sum=0;
            }
        }
        sum+=a%10;
        a/=10;
    }
    return 0;
}
