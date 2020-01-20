#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int drink=(k*l)/nl, slice=c*d, salt=p/np;
    int ara[]={drink, slice, salt};
    cout<<(min(min(drink, slice), salt))/n<<endl;
    return 0;
}
