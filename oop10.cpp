#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

//  multipath inheritence
class human
{
    public:

    string name;

    void display()
    {
        cout<<"my name is :"<<name<<endl;
    }


};

class engineer: public virtual human
{
    public:

    string specialization;

    void work()
    {
        cout<<"i have a specialization in :"<<specialization<<endl;
    }

};


class youtuber: public virtual human
{
    public:

    int subscribers;

    void content_creator()
    {
        cout<<"i have a subscribers base :"<<subscribers<<endl;
    }


};


class codeteacher: public engineer, public youtuber
{
    public:

    int salary;

    // codeteacher()
    // {

    // };

    codeteacher(string name,string specialization,int subscribers,int salary)
    {
        this->name = name;
        this->specialization = specialization;
        this->subscribers = subscribers;
        this->salary = salary;
    }


    codeteacher()
    {
        cout<<"hello codeteacher\n";
    }


};

int main()
{
    codeteacher A1("swaraj","ctech",100000,1929929);
    A1.display();

}