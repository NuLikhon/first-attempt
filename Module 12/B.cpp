#include<bits/stdc++.h>
using namespace std;

int main()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int T,ctt=1;
    scanf("%d",&T);
    //cout<<"\n";
    while(T--)
    {

        int N,q;
        //cin>>N>>q;
        scanf("%d %d",&N,&q);
        int a[N],b[q];
        memset(b,0,sizeof(int));
        for(int i=0;i<N;i++)
        {
            //cin>>a[i];
            scanf("%d",&a[i]);
        }

       for(int m=0;m<q;m++)
       {
           int I,J;
           scanf("%d %d",&I,&J);
           int minn=a[I-1];
           printf("Case :%d\n",ctt);
           for(int i=I-1;i<J;i++)
           {
               if(minn>a[i])
               {
                   minn=a[i];
               }

           }
            printf("%d\n",minn);
           //  b[m]=minn;

           //cout<<minn<<"\n";
           //q--;
       }
       //cout<<"Case "<<ctt<<":"<<"\n";
//       printf("Case :%d\n",ctt);
//       for(int i=0;i<q;i++)
//       {
//           //cout<<b[i]<<"\n";
//           printf("%d\n",b[i]);
//       }
       ctt++;
    }


return 0;
}

//2
//5 3
//78 1 22 12 3
//1 2
//3 5
//4 4
//1 1
//10
//1 1
