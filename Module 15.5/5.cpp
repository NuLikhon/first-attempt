#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int a[n][n];
    int sum=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=0; i<n; i++)
    {
        if(i%2==0)
        {
            for(int j=1; j<n; j+=2)
            {
                sum+=a[i][j];
            }

        }
         if(i%2 != 0)
        {
            for(int j=0; j<n; j++)
            {
                sum+=a[i][j];
            }

        }


    }
    cout<<endl<<sum<<endl;


    return 0;
}
