#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class complex
{
    int real,imag;

    public:

    complex() //default constructor
    {

    };

    complex(int real,int imag)
    {
        this->real = real;
        this->imag = imag;
    };

    void display()
    {
        cout<<real<<" +i"<<imag<<endl;
    }

    complex operator +(complex &c)
    {
        complex ans;
        ans.real = real+c.real;
        ans.imag = imag+c.imag;
        return ans;
    }
};



int main()
{
    complex C1(3,4);
    complex C2(4,6);

    complex C3 =C1+C2;
    C3.display();
};