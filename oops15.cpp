#include<iostream>
#include<algorithm>
#include<vector>
#include<exception>
using namespace std;

class exception
{
    protected:
    string msg;

    public:

    exception(string msg)
    {
        this->msg = msg;
    }

    string what()
    {
        return msg;
    }
};

int main()
{
    try{
    int *p = new int[100000000];
    cout<<"memory allocation is successfull\n";
    delete[]p;
    }
    catch(const bad_alloc &e)
    {
        cout<<"exception alocated due to line 27 :"<<e.what()<<endl;
    }



}