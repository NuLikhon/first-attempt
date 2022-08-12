#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        int A[N];
        for(int i=0;i<N;i++)
        {
            cin>>A[i];
        }
        int ctt=0;
        for(int i=0;i<N-1;i++)
        {
           if(A[i]==A[i+1])
           {
               continue;
           }
           else if(A[i] != A[i+1])
           {
               ctt++;
               A[i+1]=A[i];
           }
        }
        cout<<ctt<<endl;



        }




return 0;
}
