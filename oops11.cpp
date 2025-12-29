#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

// function overloading
class area
{
    public:

    int calculatearea(int r)  // circle
    {
        return 3.14*r*r;
    }

    int calculatearea(int l,int b) // rectangle
    {
        return l*b;
    }
};

int main()
{
    area A1,A2;
    cout<<A1.calculatearea(4)<<endl;
    cout<<A2.calculatearea(3,4);
    // cout<<A2.calculatearea("swaraj");
}