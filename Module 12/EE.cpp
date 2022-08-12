#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    scanf("%d",&T);
    int ctt=1,x=0,countt=0;
    while(T--)
    {
        int n,q;
        scanf("%d %d",&n,&q);
        int a[n],f[q];
        memset(f,0,q*sizeof(int));
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }

        for(int k=0;k<q;k++)
        {
            int num,i,j,v;
            scanf("%d",&num);
            int sum=0;
            if(num==1)
            {
                scanf("%d",&i);
                f[x]=a[i];
                x++;
                countt++;
                //printf("%d\n",a[i]);
                a[i]=0;
//                for(int l=0;l<n;l++)
//                {
//                    cout<<a[l]<<" ";
//                }
//                cout<<endl;


            }
            else if(num==2)
            {
                scanf("%d %d",&i,&v);
                a[i]+=v;
//                for(int l=0;l<n;l++)
//                {
// /                   cout<<a[l]<<" ";
//                }
//                cout<<endl;
            }

            else if(num==3)
            {
                scanf("%d %d",&i,&j);
                for(int m=i;m<=j;m++)
                {
                    sum=sum+a[m];
                }
                f[x]=sum;
                x++;
                countt++;
                //printf("%d\n",sum);
            }


        }
        printf("Case %d:\n",ctt);
        for(int i=0;i<countt;i++)
        {
            printf("%d\n",f[i]);
        }
        ctt++;
        x=0;
        countt=0;
    }



return 0;
}
