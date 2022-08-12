#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T,ctt=1;
    cin>>T;
    //cout<<"\n";
    while(T--)
    {

        int N,q;
        cin>>N>>q;
        int a[N],b[q];
        for(int i=0;i<N;i++)
        {
            cin>>a[i];
        }

       for(int m=0;m<q;m++)
       {
           int I,J;
           cin>>I>>J;
           int minn=a[I-1];
           for(int i=I-1;i<J;i++)
           {
               if(minn>a[i])
               {
                   minn=a[i];
               }

           }

             b[m]=minn;

           //cout<<minn<<"\n";
           //q--;
       }
       cout<<"Case "<<ctt<<":"<<"\n";
       for(int i=0;i<q;i++)
       {
           cout<<b[i]<<"\n";
       }
       ctt++;
    }


return 0;
}
