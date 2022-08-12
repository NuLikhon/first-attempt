#include<bits/stdc++.h>
#include<string>
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
                tout=true;
                for(int j=i+1; j<length; j++)
                {
//                    if(S[j]=='1')
//                    {
//                        break;
//                    }
                    if(S[j]=='0')
                    {
                        for(int k=j+1; j<length; k++)
                        {
                            if(S[k]=='1')
                            {
                                got=true;
                                break;
                            }
                        }
                    }
                    if(got==true)
                    {
                        break;
                    }
                }
            }
            if(got==true)
            {
                break;
            }
        }

        if(got==true || tout==false)
        {
            cout<<"NO";
        }
        else{
            cout<<"YES";
        }
    }


    return 0;
}
