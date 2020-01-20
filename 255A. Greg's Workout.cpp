#include <iostream>
using namespace std;

int main()
{
    int n, chest=0, biceps=0, backe=0;
    cin>>n;

    int ara[n];

    for(int i=0; i<n; i++)
    {
        cin >> ara[i];
    }
    for(int i=0; i<n; i+=3)
        chest+=ara[i];
    for(int i=1; i<n; i+=3)
        biceps+=ara[i];
    for(int i=2; i<n; i+=3)
        backe+=ara[i];

    if(chest>biceps && chest>backe)
        cout<<"chest"<<endl;
    else if(biceps>chest && biceps>backe)
        cout<<"biceps"<<endl;
    else
        cout<<"back"<<endl;

    return 0;
}
