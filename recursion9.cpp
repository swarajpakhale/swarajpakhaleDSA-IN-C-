#include<iostream>
#include<vector>
using namespace std;

void print(int arr[],int index,int n)
{
    if(index==n)
    return ;
    cout<<arr[index]<<" ";
    print(arr,index+1,n);

}


int main()
{
    int arr[] = {3,4,6,8,9};
    print(arr,0,5);
}



void print(int arr[],int index)
{
    if(index==-1)
    return;

    // print(arr,index-1);
    print(arr,index-1);
    cout<<arr[index]<<" ";
    // print(arr,index+1,n);

}


int main()
{
    int arr[] = {3,4,6,8,9};
    print(arr,4);
}