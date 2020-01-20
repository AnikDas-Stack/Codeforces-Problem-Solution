#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    char str[n], ara[n];

    for(int i=1; i<=n; i++)
        cin>>str[i];

    int i, a=1, count, index=1;
    for(i=1, count=index; i<=n; i++)
    {
        count--;
        if(count==0)
        {
            ara[a]=str[i];
            a++;
            count=index++;
        }
    }
    for(int j=1; j<a; j++)
        cout<<ara[j];
    cout<<endl;

    return 0;
}
