#include<iostream>
#include<limits.h>
using namespace std;

int main()
{
    // first maximum
    int arr[5]={2,4,6,8,10};
    int ans = INT_MIN;
    for(int i=0;i<5;i++)
    {
        if(arr[i]>ans)
        ans=arr[i];
    }
    cout<<ans<<endl;

    // second maximum
    int second = INT_MIN;
    for(int i=0;i<5;i++)
    {
        if(ans!=arr[i])
        second = max(second,arr[i]);
    }
    cout<<second<<endl;

}