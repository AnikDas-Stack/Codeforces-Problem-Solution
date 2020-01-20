#include <iostream>
using namespace std;

int main()
{
    int a, b, c, res=0;
    cin>>a>>b>>c;

    while(a>=1)
    {
        if(a*2 <= b && a*4 <= c)
        {
            res = a+(a*2)+(a*4);
            break;
        }
        else
            a=a-1;
    }
    cout<< res <<endl;
    return 0;
}
