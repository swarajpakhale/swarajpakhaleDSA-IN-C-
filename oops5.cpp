#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

// class human
// {
//     private:
//     int a;
//     protected:
//     int b;
//     public:
//     int c;
//     // void function()
//     // {
//     //     int a = 10;
//     //     int b = 20;
//     //     int c = 30;
//     // }

//     // within the class we can access everything.
//     // public,private,protected.
// };


// int main()
// {
//     human swaraj;
//     swaraj.c = 10;
// }



// class human
// {
//     private:
//     string name;
//     int age,weight;

//     // private:
// };

// class student: protected human
// {
//     private:
//     int roll_number,fees;

//     protected:
//     string name;
//     int age,weight;


//     public:

//     void fun(string n,int a,int w)
//     {
//         name = n;
//         age = a;
//         weight = w;

//     }

//     void display()
//     {
//         cout<<name<<" "<<age<<" "<<weight<<" "<<endl;
//     }

// };

// int main()
// {
//     student A;
//     A.fun("swaraj",10,20);
//     A.display();
//     // A.name = "swaraj";

// }


class human
{
    string religion,color;

    public:
    string name;
    int age,weight;
    
    // private:
};

class student: public human
{
    private:
    int roll_number,fees;

    protected:
    string name;
    int age,weight;


    public:

    student(string name,int age,int weight,int roll_number,int fees)
    {
        this->name = name;
        this->age = age;
        this->weight = weight;
        this->roll_number = roll_number;
        this->fees = fees;
    }

    void display()
    {
        cout<<" name is "<<name<<" "<<" age is "<<age<<" "<<" weight is "<<weight<<" "<<" roll_number is "<<roll_number<<" "<<" fees is "<<fees<<endl;
    }

};

class teacher: public human
{
    // public:
    int salary,id;

};

int main()
{
    student A("swaraj",10,6.66,131,2000);
    // A.fun("swaraj",10,20);
    A.display();
    // A.name = "swaraj";

    teacher B;
    B.name = "rohit";

}






























































