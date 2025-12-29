#include<iostream>
#include<vector>
using namespace std;

int pow(int num,int n)
{
    if(n==0)
    return 1;
    // if(n==1)
    // return 2;

    return 4*pow(4,n-1);
}

int main()
{
    int num,n;
    cin>>n;
    cout<<pow(4,n);
}