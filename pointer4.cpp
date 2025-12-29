#include<iostream>
#include<vector>
using namespace std;

int main()
{
    // vlaue and address dono ko print karo
    int *ptr = new int;
    *ptr = 5;
    float *ptr2 = new float;
    *ptr2 = 854;
    cout<<*ptr<<endl;
    cout<<*ptr2<<endl;

    int n;
    cout<<"enter the size of the array: ";
    cin>>n;

    int *p1 = new int [20];

    for(int i=0;i<100;i++)
    p1[i] = i+1;

    for(int i=0;i<n;i++)
    cout<<p1[i]<<endl;

    delete ptr;
    delete ptr2;
    delete[] p1;
    

}