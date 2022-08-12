#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main()
{
    int n,m;
    cin>>m>>n;

    int a[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }


    int maxx=a[0][0];
    int store=0,store2=0;
      for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(maxx<a[i][j])
            {
                maxx=a[i][j];
                store=i;
                store2=j;
            }
        }

    }
    cout<<endl<<"Max: "<<maxx<<endl<<"Location: "<<"["<<store<<"]"<<"["<<store2<<"]"<<endl;


return 0;
}
