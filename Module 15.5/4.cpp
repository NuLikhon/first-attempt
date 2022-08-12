#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int a[n][n];
    int sum=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
      for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==0)
            {
                sum+=a[i][j];
                cout<<"i= 0:"<<" "<<"Sum = "<<sum<<endl;
            }
            else if(i==(n-1))
            {
                sum+=a[i][j];
                cout<<"i= n-1:"<<" "<<"Sum = "<<sum<<endl;
            }
            else if(i>0 && i<n/2 && i==j)
            {
                sum+=a[i][j];
                cout<<"if(i>0 && i<n/2 && i==j):"<<" "<<"Sum = "<<sum<<endl;
            }
            else if(i>n/2 && i != n-1 && i==j)
            {
                sum+=a[i][j];
                cout<<"if(i>n/2 && i != n-1 && i==j)"<<" "<<"Sum = "<<sum<<endl;
            }
//            else if(i>0 && i<n/2 && i !=j && j>n/2 && j<n-1)
//            {
//                sum+=a[i][n-1-i];
//                 cout<<"if(i>0 && i<n/2 && i !=j && j>n/2)"<<" "<<"Sum = "<<sum<<endl;
//            }
//             else if(i>n/2 && i !=(n-1) && i !=j && j<n/2 && j>0)
//            {
//                sum+=a[i][n-1-i];
//                cout<<"if(i>n/2 && i !=(n-1) && i !=j && j<n/2)"<<" "<<"Sum = "<<sum<<endl;
          // }

        }


        cout<<"i= :"<<i<<" "<<"Sum = "<<sum<<endl;

    }
        for(int i=0,j=n-1;i<n;i++,j--)
        {
//            for(int j=n-1;j>=0;j--)
//            {
                if(i>0 && i<n/2)
                {
                    sum+=a[i][j];
                }
                 if(i>n/2 && i != n-1)
                {
                    sum+=a[i][j];
                }
            //}
        }

    sum+=a[n/2][n/2];
    cout<<endl<<sum<<endl;


return 0;
}
