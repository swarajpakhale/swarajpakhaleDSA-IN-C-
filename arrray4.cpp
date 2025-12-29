#include<iostream>
#include<limits.h>
using namespace std;

int main()
{
    int sum=0, n=6,ans;
    int arr[5]={1,3,4,5,6};
    for(int i=0;i<5;i++)
    sum=sum+arr[i];
    sum = n*(n+1)/2-sum;

    cout<<sum<<endl;

    int arr[6]={1,2,3,4,5,6};
    int target=3,ans;
    for(int i=0;i<6;i++)
    {
        if(arr[i]==target)
         ans=arr[i];
    }
    cout<<ans<<endl;




}