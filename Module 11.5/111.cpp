#include<bits/stdc++.h>

using namespace std;

int main()
{
    char S[100000];
    int T;
    cin>>T;
    while(T--)
    {
        cin>>S;
        int length=strlen(S);
        bool got=false,tout=false;
        cout<<"len"<<length<<endl;

        for(int i=0; i<length; i++)
        {
            if(S[i]=='1')
            {
                if(i<=length-1 && S[i+1]=='0')
                {
                    if(i<=length-1 && S[i+2]=='1')
                    {
                        got=true;
                        break;
                    }
                }
            }
        }
        if(got==true )
        {
            cout<<"NO";
        }
        else{
            cout<<"YES";
        }
    }
}
