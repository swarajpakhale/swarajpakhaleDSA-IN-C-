#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

//  multiple inheritence
class engineer
{
    public:

    string specialization;

    void work()
    {
        cout<<"i have a specialization in :"<<specialization<<endl;
    }

    engineer()
    {
        cout<<"hello engnieer\n";
    }

};


class youtuber
{
    public:

    int subscribers;

    void content_creator()
    {
        cout<<"i have a subscribers base :"<<subscribers<<endl;
    }
    youtuber()
    {
        cout<<"hello youtuber\n";
    }


};


class codeteacher: public engineer, public youtuber
{
    public:

    string name;

    codeteacher(string name,string specialization,int subscribers)
    {
        this->name = name;
        this->specialization = specialization;
        this->subscribers = subscribers;
    }

    void showcase()
    {
        cout<<"my name is :"<<name<<endl;
        work();
        content_creator();
    }
    codeteacher()
    {
        cout<<"hello codeteacher\n";
    }

};

int main()
{
    codeteacher A1;

}