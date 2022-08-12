#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        int n,q;
        scanf("%d %d",&n,&q);
        int a[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(int k=0;i<q;k++)
        {
            int num,i,j,v;
            scanf("%d",&num);
            if(num==1)
            {
                scanf("%d",&i);

                printf("%d\n",a[i]);
                a[i]=0;


            }
            else if(num==2)
            {
                scanf("%d %d",&i,&v);
                a[i]+=j;
            }
            int sum=0;
            else if(num==3)
            {
                scanf("%d %d",&i,&j);
                for(int m=i;m<j;m++)
                {
                    sum=sum+a[m];
                }
                printf("%d\n",sum);
            }


        }
    }



return 0;
}
