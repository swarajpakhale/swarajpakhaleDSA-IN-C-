#include<iostream>
#include<limits.h>
using namespace std;

int main()
{
    int arr[6];
    for(int i=0;i<6;i++)
    cin>>arr[i];

    for(int i=0;i<6;i++)
    cout<<arr[i]<<" ";
    return 0;

    int arr[6]={1,2,3,4,5,6};
    int  a;
    cout<<sizeof (a)<<" ";
    return 0;


    int arr[5]={1,2,3,4,5};
    int  ans = INT_MAX;
    for(int i=0;i<5;i++)
    {
        if(arr[i]<ans)
        ans=arr[i];
    }
    cout<<ans;
    cout<<endl;

    // max value
    ans = INT_MIN;
    for(int i=0;i<5;i++)
    {
        if(arr[i]>ans)
        ans=arr[i];
    }
    cout<<ans;
    cout<<endl;






}