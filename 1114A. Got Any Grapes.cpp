#include <iostream>
using namespace std;

int main()
{
    int x, y, z, a, b, c;
    cin>>x>>y>>z>>a>>b>>c;

    if(x<=a)
    {
        b=b+(a-x);
        if(y<=b)
        {
            c=c+(b-y);
            if(z<=c)
            {
                cout<<"YES"<<endl;
                return 0;
            }
             cout<<"NO"<<endl;
             return 0;
        }
        cout<<"NO"<<endl;
        return 0;
    }
    cout<<"NO"<<endl;
    return 0;
}
