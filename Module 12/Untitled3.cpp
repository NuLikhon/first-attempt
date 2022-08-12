#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    scanf("%d",&T);
    int ctt=1;
    while(T--)
    {
        int n,q;
        scanf("%d %d",&n,&q);
        int a[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        printf("Case %d:\n",ctt);
        for(int k=0;k<q;k++)
        {
            int num,i,j,v;
            scanf("%d",&num);
            int sum=0;
            if(num==1)
            {
                scanf("%d",&i);

                printf("%d\n",a[i]);
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
//                    cout<<a[l]<<" ";
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
                printf("%d\n",sum);
            }


        }
        ctt++;
    }



return 0;
}
