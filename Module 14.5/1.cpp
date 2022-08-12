#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    int sum=0;

    for(int i=0;i<n;i++)
    {
        if(i<=n/2)
        {
            if(i==0)
        {
            for(int j=0;j<=n/2;j++)
            {
                sum=sum+a[0][j];
            }
            sum+=a[i][n-1];
        }
        if(i>0 && i != n/2)
        {
//            for(int i=1;i<n/2;i++)
//            {
                sum+=a[i][n/2]+a[i][n-1];
//            }

        }
        if(i==n/2)
        {
            for(int j=0;j<n;j++)
            {
                sum+=a[n/2][j];
            }
        }
        }
        if(i>n/2)
        {
          if(i>n/2 && i != n-1)
        {
//           for(int i=(n/2)+1;i<n-1;i++)
//            {
                sum+=a[i][0]+a[i][n/2];
            //}
        }
        if(i==n-1)
        {
            for(int j=n/2;j<n;j++)
            {
                sum+=a[n-1][j];
            }
            sum+=a[n-1][0];
        }
        }



    cout<<endl<<sum<<"index of i"<<" "<<i<<endl;

    }

    cout<<endl<<sum<<endl;

    cout<<"2D Output"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
