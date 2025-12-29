#include<iostream>
#include<vector>
using namespace std;

int sqsum(int n)
{
    if(n==1)
    return 1;

    return n*n+sqsum(n-1);
}


int main()
{
    int n;
    cin>>n;
    cout<<sqsum(n);
}

int cubesum(int n)
{
    if(n==0)
    return 1;
    if(n==1)
    return n;

    return n*n*n+cubesum(n-1);
}


int main()
{
    int n;
    cin>>n;
    cout<<cubesum(n);
}

















