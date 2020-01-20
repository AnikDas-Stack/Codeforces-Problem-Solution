#include <iostream>
using namespace std;

int main()
{
    int s, v1, v2, t1, t2, p1, p2;
    cin>>s>>v1>>v2>>t1>>t2;

    p1=(2*t1)+(s*v1);
    p2=(2*t2)+(s*v2);

    if(p1<p2)
        cout<<"First"<<endl;
    else if(p2<p1)
        cout<<"Second"<<endl;
    else
        cout<<"Friendship"<<endl;

    return 0;
}
