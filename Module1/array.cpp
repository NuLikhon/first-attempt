#include<bits/stdc++.h>
using namespace std;

int main()
{
    int size;
    cin>>size;
    int a[size];
    int pos;
    cout<<"Position of Insertion";
    cin>>pos;
//    int value;
//    cout<<"Value of Insertion";
//    cin>>value;
for(int i=0;i<size;i++)
    {
        cin>>a[i];
    }

if(pos<0 || pos>size-1)
{
    cout<<"Invalid Index"<<endl;
}
else{
        if(size-1==pos) size--;
else{
    for(int i=pos+1;i<size;i++)
    {
        a[i-1]=a[i];
    }
    size--;
}

}


//    for(int i=3;i>=pos;i--)
//    {
//        a[i+1]=a[i];
//    }


//a[4]=a[pos];
//    a[pos]=value;

    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<" ";
    }


return 0;
}
