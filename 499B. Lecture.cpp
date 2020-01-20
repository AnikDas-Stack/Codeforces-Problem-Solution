#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int n, m;
    cin>>n>>m;

    string storage[m][2], lecture[n], result[n];

    for(int i=0; i<m; i++)
    {
        for(int j=0; j<2; j++)
            cin>>storage[i][j];
    }
    for(int i=0; i<n; i++)
        cin>>lecture[i];

    for(int i=0; i<n; i++)
    {
        int length=lecture[i].size();
        for(int j=0; j<m; j++)
        {
            if(lecture[i]==storage[j][0] || lecture[i]==storage[j][1])
            {
                if((storage[j][0].size())<=length && (storage[j][1].size())>=length)
                    result[i]=storage[j][0];
                else if((storage[j][0].size())>=length && (storage[j][1].size())<=length)
                    result[i]=storage[j][1];
                else
                    result[i]=storage[j][0];
            }
        }
    }
    for(int i=0; i<n; i++)
    {
        if(i==n-1)
            cout<<result[i]<<endl;
        else
            cout<<result[i]<<" ";
    }
    return 0;
}
