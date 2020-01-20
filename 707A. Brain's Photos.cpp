#include <stdio.h>
#include <conio.h>
int main()
{
    int n, m, flag=1;
    scanf("%d %d", &n, &m);
    char ara[n][m];

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            scanf("%s", &ara[i][j]);
        }
    }


     for(int i=0; i<n; i++)
     {
         for(int j=0; j<m; j++)
        {
            if(ara[i][j]=='C'||ara[i][j]=='M'||ara[i][j]=='Y')
            {
                flag=0;
                break;
            }
        }
        if(flag==0)
            break;
     }
     if(flag==0)
        printf("#Color\n");
     else
        printf("#Black&White\n");
     return 0;
}
