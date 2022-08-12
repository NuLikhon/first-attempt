#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int minn=a[0];
        for(int i=0;i<n;i++)
        {
            if(minn>a[i])
            {
                minn=a[i];
            }

        }
        int ctt=0;
         for(int i=0;i<n;i++)
        {
            if(minn<a[i])
            {
                ctt++;
            }

        }
        cout<<ctt<<endl;
    }



return 0;
}
