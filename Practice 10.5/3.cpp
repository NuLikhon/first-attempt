#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int a[n],b[m],sum=0,ab[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        //sum+=a[i];
    }
     for(int i=0;i<m;i++)
    {
        cin>>b[i];
        //sum+=a[i];
    }
    int ctt=0,k=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(a[i]==b[j])
            {
                ab[k]=b[j];
                k++;
                ctt++;
            }
        }
    }
    if(ctt>0)
    {
        for(int i=0;i<ctt;i++)
        {
            cout<<ab[i]<<" ";
        }
    }
    else if(ctt==0)
    {
        cout<<"Empty Set";
    }


return 0;
}
