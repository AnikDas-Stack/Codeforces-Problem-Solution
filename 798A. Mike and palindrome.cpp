#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin>>s;

    int length, limit, counter=0;
    length = s.size();
    limit = length/2;

    for(int i=0, j=length-1; i<limit; ++i, --j)
    {
        if(s[i]!=s[j])
            counter++;
    }
    if(counter==0 && length%2!=0)
        cout<<"YES"<<endl;
    else if(counter==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}
