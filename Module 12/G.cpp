#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin>>N;
    int k=N;
    int temp,temp2,temp3;
    while(k>0)
    {
         temp=k%10;
        k=k/10;
         temp2=k%10;
        k=k/10;
         temp3=k%10;
        k=k/10;
    }
    int reverse_number=(100*temp)+(10*temp2)+temp3;
    if( N == reverse_number)
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }
//    cout<<temp<<" "<<temp2<<" "<<temp3<<endl;
//
 //printf("%d",reverse_number);


return 0;
}
