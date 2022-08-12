#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a==b==c)
    {
        cout<<1;
    }
    else if(a!=b && b!=c && c!=a)
    {
        cout<<3;
    }
    else if(a==b && a != c)
    {
        cout<<2;
    }
    else if(a!=b && a == c)
    {
        cout<<2;
    }
    else if(a!=b && a == c)
    {
        cout<<2;
    }


return 0;
}
