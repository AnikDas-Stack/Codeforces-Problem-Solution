#include <iostream>
using namespace std;

int main()
{
    int a, b, c1=0, c2=0, c3=0;
    cin>>a>>b;

    for(int i=1; i<=6; i++)
    {
        int temp1=a-i;
        if(temp1<0)
            temp1=temp1*(-1);
        int temp2=b-i;
        if(temp2<0)
            temp2=temp2*(-1);

        if(temp1<temp2)
            c1++;
        else if(temp1>temp2)
            c3++;
        else
            c2++;
    }

    cout<<c1<<" "<<c2<<" "<<c3<<endl;
    return 0;
}
