#include<iostream>
#include<vector>
using namespace std;

int totalways(int n)
{
    if(n<=1)
    return 1;

    return totalways(n-1)+totalways(n-2);
}

int main()
{
    int n;
    cin>>n;
    cout<<totalways(n);
}

int main()
{
    int n;
    cout<<"enter the no of stairs :";
    cin>>n;
    if(n<=1)
    {
        cout<<n;
        return 0;
    }

    int n1=0,n2=1,nextterm=n1+n2;

    for(int i=2;i<=n;i++)
    {
        n1 = n2;
        n2 = nextterm;
        nextterm = n1+n2;
    }

    cout<<"total no of ways to reach step "<< n << " is :"<< nextterm;
    cout<<endl;
    
}