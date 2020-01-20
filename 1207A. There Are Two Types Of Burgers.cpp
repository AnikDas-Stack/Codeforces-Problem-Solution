#include <iostream>
using namespace std;

int main()
{
    int t,b,p,f,h,c,half,m1,m2,ans;
    cin>>t;

    while (t--)
    {
        cin>>b>>p>>f>>h>>c;
        m1 = m2 = 0;

        if (h >= c)
        {
            half = b/2;
            m1 = min(half,p);

            if (b > p*2)
            {
                b -= p*2;
                half = b/2;
                m2 = min(half,f);
            }
        }
        else
        {
            half = b/2;
            m2 = min(half,f);

            if (b > f*2)
            {
                b -= f*2;
                half = b/2;
                m1 = min(half,p);
            }
        }
        cout<<m1*h+m2*c<<endl;
    }
    return 0;
}

