#include<bits/stdc++.h>
using namespace std;

int binarySearch(int a[],int x,int lb,int ub)
{
    if(lb<=ub)
    {
        int mid=(lb+ub)/2;
        //x==a[mid]
        if(x==a[mid])
        {
            return mid;
        }
        else if(x>a[mid])
        {
            binarySearch(a,x,mid+1,ub);
        }
        else if(x<a[mid])
        {
            binarySearch(a,x,lb,mid-1);
        }

    }
    else return -1;
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int x;
    cout<<"please enter the value you want to search";
    cin>>x;
    int index=binarySearch(a,x,0,n-1);
    if(index != -1)
    {
      cout<<"Index Number :"<<index+1<<endl;
    }
    else
    {
        cout<<"Not Found"<<endl;
    }



    return 0;
}
