#include<iostream>
using namespace std;

int main()
{

    int row,col;

    for(int row=1;row<=4;row++)
    {
        for(int col=1;col<=row;col++)
        {
            cout<<"* ";
        }
        for(int col=1;col<=8-2*row;col++)
        {
            cout<<"  ";
        }
        for(int col=1;col<=row;col++)
        {
            cout<<"* ";
        }
        
        cout<<endl;

    }
    for(int row=3;row>=1;row--)
    {
        for(int col=1;col<=row;col++)
        {
            cout<<"* ";
        }
        for(int col=1;col<=8-2*row;col++)
        {
            cout<<"  ";
        }
        for(int col=1;col<=row;col++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }


}    