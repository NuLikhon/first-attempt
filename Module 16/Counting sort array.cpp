#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<n;i++)
    {
        int key =a[i];
        int j=i-1;
        cout<<" I value:"<<i<<endl;
        while(a[j]>key && j>=0)
        {
            cout<<"value of J start : "<<j<<endl;
            a[j+1]=a[j];
            j--;
            cout<<"value of J after decrease : "<<j<<endl;
        }
        a[j+1]=key;
        cout<<"J value after while loop"<<j<<endl;
        //cout<<"after i :"<<i<<endl;
        for(int i=0;i<n;i++)
    {
       cout<<a[i]<<" ";
    }
    cout<<endl;
    }
    for(int i=0;i<n;i++)
    {
       cout<<a[i]<<" ";
    }

return 0;
}
