#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

// single inheritance
class human
{
    protected:
    string name;
    int age;

    public:

    human(string name,int age)
    {
        this->name = name;
        this->age = age;
    }
    // ~human()
    // {
    //     cout<<"hello human"<<endl;
    // }

    void work()
    {
        cout<<"i am working \n";
    }

    void display()
    {
        cout<<name<<" "<<age<<" ";
    }

};

class student: public human
{
    int roll_number,fees;

    public:

    student(string name,int age,int roll_number,int fees): human(name,age)
    {
        // this->name = name;
        // this->age = age;
        this->roll_number = roll_number;
        this->fees = fees;
    }

    // ~student()
    // {
    //     cout<<"hello student"<<endl;;
    // }

    void display()
    {
        cout<<name<<" "<<age<<" "<<roll_number<<" "<<fees<<" ";
    }


};


int main()
{
    student A1("swaraj",10,121,100000);
    // A1.work();
    A1.display();

}

















































































