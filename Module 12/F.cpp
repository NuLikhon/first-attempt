#include<bits/stdc++.h>
using namespace std;

int main()
{
    int ctt=1;
    //cin>>a;
    int a[3];
    for(int i=0;i<3;i++)
    {
        cin>>a[i];
    }

    for(int i=0;i<3;i++)
    {
        for(int j=i+1;j<2-i;j++)
        {
             if(a[j]>a[j+1])
        {
            swap(a[j],a[j+1]);
        }
        }

    }
//     for(int i=0;i<3;i++)
//    {
//        cout<<a[i]<<" ";
//    }
     for(int i=0;i<2;i++)
    {
        if(a[i]==a[i+1])
        {
            continue;
        }
        else
        {
            ctt++;
        }
    }
    //cout<<"\n";
    cout<<ctt;




return 0;
}
