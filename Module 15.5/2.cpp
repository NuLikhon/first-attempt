#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main()
{

    int a[3][3],b[3][3],C[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>a[i][j];
        }
    }
     for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>b[i][j];
        }
    }


       for(int i=0,l=0;i<3;i++)
    {
        int m=0;
        for(int k=0;k<3;)
        {
            int   sum=0;
        for(int j=0;j<3;j++)
        {
            sum+=a[l][j]*b[j][k];

        }
        C[i][m]=sum;
        m++;
        k++;
        }
        l++;


    }



      for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }


return 0;
}
