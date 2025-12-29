#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;


// class a
// {
//     // when their is no any object present in the class then  it is known as empty class

//     // Because every object in C++ must have a unique memory address. If its size were 0 bytes, two objects would have the same address. 

//     // int b;
//     // // char c;
//     // int c;
//     // int d;

//     // c p p p a a a a b p p p p p p p p e e e e e e e e 
//     char c;
//     // char b;
//     int a;
//     char b;
//     double e;


// };

// int main()
// {
//     a obj;
//     cout<<sizeof(obj);

// }



class student
{
    public:
    string name;
    int age,roll_number;
    string grade;

};

int main()
{
    student *S = new student;
    (*S).name ="swaraj";
    (*S).age = 10 ;
    (*S).roll_number = 12;
    (*S).grade ="A+";

    cout<<S->name<<" "<<endl;
    cout<<S->age<<" "<<endl;
    cout<<S->roll_number<<" "<<endl;
    cout<<S->grade<<" "<<endl;

    



}































