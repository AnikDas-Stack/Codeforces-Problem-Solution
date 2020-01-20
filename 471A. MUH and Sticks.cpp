#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, counter[9];
    for(int i=0; i<9; i++)
        counter[i]=0;
    for(int i=1; i<=6; i++)
    {
        cin>>n;
        if(n==1)
            counter[0]++;
        else if(n==2)
            counter[1]++;
        else if(n==3)
            counter[2]++;
        else if(n==4)
            counter[3]++;
        else if(n==5)
            counter[4]++;
        else if(n==6)
            counter[5]++;
        else if(n==7)
            counter[6]++;
        else if(n==8)
            counter[7]++;
        else
            counter[8]++;
    }
    sort(counter, counter+9);
    if((counter[8]==4 && counter[7]==1 && counter[6]==1) || (counter[8]==5 && counter[7]==1))
       cout<<"Bear"<<endl;
    else if((counter[8]==4 && counter[7]==2) || (counter[8]==6))
       cout<<"Elephant"<<endl;
    else
        cout<<"Alien"<<endl;

    return 0;
}
