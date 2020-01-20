#include <iostream>
using namespace std;

int main()
{
    int l, r, m, n, o, p, q, k;
    cin>>l>>r;
    int temp, ara[10], a;

    for(int i=l; i<=r; i++)
    {
        temp = i, a=0;

        while(temp != 0)
        {
            ara[a] = temp%10;
            a++;
            temp = temp/10;
        }

        if(a-1==5)
        {
            m=ara[0], n=ara[1], o=ara[2], p=ara[3], q=ara[4];
            if(m!=n && m!=o && m!=p && m!=q && m!=k && n!=o && n!=p &&
               n!=q && n!=k && o!=p && o!=q && o!=k && p!=q && p!=k && q!=k)
            {
                cout<<i<<endl;
                return 0;
            }
            else
                continue;
        }

        else if(a-1==4)
        {
            m=ara[0], n=ara[1], o=ara[2], p=ara[3], q=ara[4];
            if(m!=n && m!=o && m!=p && m!=q && n!=o && n!=p && n!=q && o!=p && o!=q && p!=q)
            {
                cout<<i<<endl;
                return 0;
            }
            else
                continue;
        }

        else if(a-1==3)
        {
            m=ara[0], n=ara[1], o=ara[2], p=ara[3];
            if(m!=n && m!=o && m!=p && n!=o && n!=p && o!=p)
            {
                cout<<i<<endl;
                return 0;
            }
            else
                continue;
        }

        else if(a-1==2)
        {
            m=ara[0], n=ara[1], o=ara[2];
            if(m!=n && m!=o && n!=o)
            {
                cout<<i<<endl;
                return 0;
            }
            else
                continue;
        }

        else if(a-1==1)
        {
            m=ara[0], n=ara[1];
            if(m!=n)
            {
                cout<<i<<endl;
                return 0;
            }
        }

        else
        {
            m=ara[0];
            cout<<i<<endl;
            return 0;
        }
    }
    cout<<"-1"<<endl;
    return 0;
}
