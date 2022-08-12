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
//     for(int i=0;i<n/2;i++)
//    {
//
//            int temp=a[i];
//            a[i]=a[n-i-1];
//            a[n-i-1]=temp;
//
//
////        a[i]=a[n-i-1];
//    }
    //cout<<sum<<endl;
//       for(int i=0;i<n;i++)
//    {
//
//        cout<<a[i]<<" ";
//    }
int maxx=a[0],minn=a[0],indexmaxx=0,indexminn=0;
       for(int i=0;i<n;i++)
    {
        if(maxx<a[i])
        {
            maxx=a[i];
            indexmaxx=i;
        }
        if(minn>a[i])
        {
            minn=a[i];
            indexminn=i;
        }


    }

    cout<<"Max :"<<maxx<<", Index : "<<indexmaxx<<endl;
    cout<<"Min :"<<minn<<", Index : "<<indexminn<<endl;

return 0;
}
