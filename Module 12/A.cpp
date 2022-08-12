#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[4];
    int countt=0;
    for(int i=0;i<4;i++)
    {
        cin>>a[i];
        if(a[i]>=10)
        {
            countt++;
        }
    }
    cout<<countt;


return 0;
}
