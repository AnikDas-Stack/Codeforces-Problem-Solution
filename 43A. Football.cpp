#include <iostream>
using namespace std;

int main()
{
    int n, team1_score=0, team2_score=0;
    cin>>n;
    string ara[n];

    for(int i=0; i<n; i++)
        cin>>ara[i];

    string team1_name = ara[0], team2_name;

    for(int i=0; i<n; i++)
    {
        if(ara[i]==team1_name)
            team1_score++;
        else
        {
            team2_name=ara[i];
            team2_score++;
        }

    }
    if(team1_score>team2_score)
        cout<<team1_name<<endl;
    else
        cout<<team2_name<<endl;

    return 0;
}
