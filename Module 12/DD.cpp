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
        int A[N],freq[1001];
        memset(freq,0,1001*sizeof(int));

        for(int i=0; i<N; i++)
        {
            cin>>A[i];
        }
        //int ctt=0;
        for(int i=0; i<N; i++)
        {
            int temp=A[i];
            freq[temp]++;
        }
        // cout<<ctt<<endl;
            int maxx=freq[0];
        for(int i=0; i<1001; i++)
        {
            if(maxx<freq[i])
            {
                maxx=freq[i];
            }
//            if(freq[i] != 0)
//            {
//                cout<<freq[i]<<" ";
//            }


        }
        cout<<N-maxx<<endl;
    }

    return 0;
}
