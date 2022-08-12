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
    int ss,ctt=0;
    cin>>ss;
    for(int i=0;i<n;i++)
    {
        if(ss==a[i])
        {
            cout<<"FOUND at index position: "<<ss<<", "<<i;
            ctt=1;
            break;
        }
    }
    if(ctt==0)
    {
        cout<<"NOT FOUND"<<endl;
    }


return 0;
}
