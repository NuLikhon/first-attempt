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
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
             if(a[i]>a[j])
        {
            int temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
        }


    }
    int ct=0,k=0;
      for(int i=0;i<n-1;i++)
    {

            if(a[i]==a[i+1])
            {
                continue;
            }
         else if(a[i] != a[i+1])
         {
               b[k]=a[i];
         k++;
         ct++;
         }




    }
    cout<<"ct"<<ct<<endl;
    b[ct]=a[n-1];



    for(int i=0;i<=ct;i++)
    {
        cout<<b[i]<<" ";
    }



return 0;
}
