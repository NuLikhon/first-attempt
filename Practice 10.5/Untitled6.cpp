#include<bits/stdc++.h>
using namespace std;

int main()
{
     int n;
    cin>>n;
    int a[n],b[n],c[n],sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        //sum+=a[i];
    }
//    for(int i=0;i<n-1;i++)
//    {
//        for(int j=i+1;j<n;j++)
//        {
//             if(a[i]>a[j])
//        {
//            int temp=a[i];
//            a[i]=a[j];
//            a[j]=temp;
//        }
//        }
//
//
//    }
    int ct=0,k=0;
      for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
             if(a[i]==a[j])
            {
                c[k]=j;
                k++;
                ct++;
            }


        }






    }
    cout<<"ct"<<ct<<endl;
    int ctt=0,m=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<ct;j++)
        {
            if(i==c[j])
            {
                continue;
            }
            else if(i !=c[j])
            {
                b[m]=a[i];
                m++;
                ctt++;
            }
        }
    }
cout<<"ctt"<<ctt<<endl;
//    b[ct]=a[n-1];



    for(int i=0;i<=ct;i++)
    {
        cout<<b[i]<<" ";
    }



return 0;
}

