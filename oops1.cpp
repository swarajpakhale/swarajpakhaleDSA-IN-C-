#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class Student
{
    // Access modifier are  of three types
    // public.
    // private.
    //protected.

    private:                      
    string name;
    int age,roll_number;
    string grade;

    // function getter and setter very important
    public:

    void Setname(string S)
    {
        if(S.size()==0)
        {
            cout<<"invalid name: ";
            return;
        }
        name = S;
    }

    void Setage(int a)
    {
        age = a;
    }

    void Setroll_number(int r)
    {
        roll_number = r;
    }

    void Setgrade(string S)
    {
        grade = S;
    }

    void getname()
    {
        cout<<name<<endl;
    }

    void getage()
    {
        cout<<age<<endl;
    }

    // void getroll_number()
    // {
    //     cout<<roll_number<<endl;
    // }

    void getgrade()
    {
        cout<<grade<<endl;
    }

    int getroll_number()
    {
        return roll_number;
    }

    string getgrade(int pin)
    {
       if(pin==123)
       return grade;
       
       return" ";
       
    }


};

int main()
{
    Student S1;
    S1.Setname("");
    S1.Setage(10);
    S1.Setroll_number(12);
    S1.Setgrade("A");
    S1.getname();
    S1.getage();
    // S1.getroll_number();
    S1.getgrade();
    cout<<S1.getroll_number()<<endl;
    cout<<S1.getgrade(123)<<endl;

    // S1.name = "swaraj";
    // S1.age = 20;
    // S1.roll_number = 121;
    // S1.grade = "A+";

    // cout<<S1.age<<" "<<endl;
    // cout<<S1.roll_number<<" "<<endl;

    // Student S2;
    // S2.name = "swaraj";
    // S2.age = 10;
    // S2.roll_number = 72;
    // S2.grade = "A+";
    // cout<<S2.grade<<endl;
    
}


















