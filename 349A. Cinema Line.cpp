#include <iostream>
using namespace std;

int main()
{
    int n, sum1=0, sum2=0, sum3=0;
    cin>>n;
    int ara[n];

    for(int i=0; i<n; i++)
        cin>>ara[i];

    for(int i=0; i<n; i++)
    {
        if(ara[i]==25)
            sum1++;
        else if(ara[i]==50)
        {
            if(sum1>0)
            {
                sum2++;
                sum1--;
            }
            else
            {
                cout<<"NO"<<endl;
                return 0;
            }
        }
        else
        {
            if(sum2>0 && sum1>0)
            {
                sum2--;
                sum1--;
            }
            else if(sum1>=3)
                sum1=sum1-3;
            else
            {
                cout<<"NO"<<endl;
                return 0;
            }
        }
    }
    cout<<"YES"<<endl;
    return 0;
}
