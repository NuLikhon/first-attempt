#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
    char s[200001];
    cin>>s;
    //cout<<s;
    int tempA,tempZ;
    int len=strlen(s);
    //cout<<len;
    for(int i=0;i<len;i++)
    {
        if(s[i]=='A')
        {
            tempA=i;
            break;
        }
    }
    for(int i=len-1;i>=0;i--)
    {
        if(s[i]=='Z')
        {
            tempZ=i;
            break;
        }
    }

   // cout<<tempA<<" "<<tempZ;
    int ghh=tempZ-tempA+1;
    cout<<ghh;



return 0;
}
