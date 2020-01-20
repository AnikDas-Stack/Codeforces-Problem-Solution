#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int q;
    cin>>q;
    long long int a, b, c, alice, bob, differ;

    for(int i=1; i<=q; i++)
    {
        cin>>a>>b>>c;
        long long int ara[]= {a, b, c};
        sort(ara, ara+3);

        alice=ara[0], bob=ara[1]+ara[2];

        differ=bob-alice;
        bob=(bob-differ)+(differ/2);
        alice=alice+(differ/2);

        cout<<alice<<endl;
    }
    return 0;
}
