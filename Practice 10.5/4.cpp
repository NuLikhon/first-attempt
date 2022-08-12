#include<bits/stdc++.h>
using namespace std;

int main()
{
     int n;
    cin>>n;
    int a[n],b[n],sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        //sum+=a[i];
    }
     for(int i=0;i<n;i++)
    {
        if(a[i]%3==0)
        {
            a[i]=-1;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }


return 0;
}
