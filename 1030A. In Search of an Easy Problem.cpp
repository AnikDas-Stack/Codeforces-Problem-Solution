#include <iostream>
using namespace std;

int main()
{
    int n, flag=0;
    cin>>n;

    int ara[n];

    for(int i=0; i<n; i++)
    {
        cin>>ara[i];

        if(ara[i]==1)
        {
            flag=1;
        }
    }

    if(flag==1)
        cout<<"HARD"<<endl;
    else
        cout<<"EASY"<<endl;

    return 0;
}
