#include <iostream>
using namespace std;

int main()
{
    // simple array program
    
    int arr[] = {1,2,3,4,5};
    int n;
    cout<<" enter the no of terms :";
    cin>>n;
    cout<<" enter the size of array :";
    for(int i=0;i<=4;i++)
    cin>>arr[i];

    // now the print the given array

    for(int i=0;i<=4;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}