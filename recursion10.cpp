#include<iostream>
#include<vector>
using namespace std;

int sum(int arr[],int index)
{
    if(index==-1)
    return 0;

    return arr[index]+sum(arr,index-1);
}

int main()
{
    int arr[] = {3,5,6,7,8};
    cout<<sum(arr,4);
}

int sum(int arr[],int index,int n)
{
    if(index==n)
    return 0;

    return arr[index]+sum(arr,index+1,n);
}

int main()
{
    int arr[] = {3,5,6,7,8};
    cout<<sum(arr,0,5);
}











