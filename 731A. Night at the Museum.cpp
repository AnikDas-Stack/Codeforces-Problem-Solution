#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string a;
    char current;
    cin>>a;
    int initial=97, temp, differ, result=0, length=a.size();

    for(int i=0; i<length; i++)
    {
        differ = (i==0) ? (initial-(int)(a[i])):(current-(int)(a[i]));

        differ = (differ<0) ? (-(differ)):differ;
        result = (differ>13) ? (result+(26-differ)):(result+differ);
        current=(int)(a[i]);
    }
    cout<<result<<endl;
    return 0;
}
