#include <iostream>
using namespace std;

int main()
{
    string onTable, onHand[5];

    cin>>onTable;
    for(int i=0; i<5; i++)
        cin>>onHand[i];

    int flag=0;
    for(int i=0; i<5; i++)
    {
        string temp1 = onHand[i];

        if(temp1[0]==onTable[0] || temp1[1]==onTable[1])
        {
            flag=1;
            break;
        }
    }

    if(flag==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}
