#include<bits/stdc++.h>
using namespace std;
int binarySearch(int array[],int x,int lb,int ub)
{
    if(lb<=ub)
    {
        int mid=(lb+ub)/2;
        if(x==array[mid])
        {
            return mid;
        }
        else if(x>array[mid])
        {
            binarySearch(array,x,mid+1,ub);
        }
        else if(x<array[mid])
        {
            binarySearch(array,x,lb,mid-1);
        }

    }
    else{
        return -1;
    }

}

int main()
{
    int size;
    cin>>size;
    int array[size];
    for(int i=0;i<size;i++)
    {
        cin>>array[i];
    }
    int check_value;
    cin>>check_value;
    int indexNumber=binarySearch(array,check_value,0,size-1);
    if(indexNumber!=-1)
    {
       cout<<"Index :"<<indexNumber<<endl<<"position No:" << indexNumber+1<<endl;
    }
    else{
        cout<<"Not Found"<<endl;
    }



return 0;
}
