#include <iostream>
using namespace std;

int main()
{
    string n;
    cin>>n;

    long long int len=n.size();


    for(long long int i=0; i<len; i++)
    {
        if(n[i]=='1' && n[i+1]=='4' && n[i+2]=='4')
            i+=2;
        else if(n[i]=='1' && n[i+1]=='4')
            i++;
        else if(n[i]=='1')
            continue;
        else
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
    return 0;
}
