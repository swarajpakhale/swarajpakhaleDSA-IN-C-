#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class customer
{
    string name;
    int account_number,balance,age;
    static int total_customer;
    static int total_balance;
    // static int total_customer;
    public:
    static void acceStatic()
    {
        // customer::total_customer = 0;
        cout<<"total number of customer :"<<total_customer<<endl;
        cout<<"total number of balance :"<<total_balance<<endl;
    }


//  const is important keyword that can not be changed once created.
//  because it helps in avoiding bugs.
//  and used in pointer function and class member.
//  static member function.


    void deposit(int amount)
    {
        if(amount>0)
        {
            balance+=amount;
            total_balance+=amount; 
        }
        else{
            cout<<"invaid balance :";
        }

    }

    void withdraw(int amount)
    {
        if(amount<=balance&&amount>0)
        {
            balance-=amount;
            total_balance-=amount;
        }
    }

    customer(string name,int account_number,int balance,int age)
    {
        this->name = name;
        this->account_number = account_number;
        this->balance = balance;
        this->age = age;
        total_customer++;
        total_balance+=balance;
    }

   void display()
    {
        cout<<name<<" "<<account_number<<" "<<balance<<" "<<age<<" "<<endl;
    }

    void display_total()
    {
        cout<<total_customer<<endl;
    }
};

    int customer::total_customer=0;
    int customer::total_balance=0;

int main()
{
    customer A1("swaraj",121,1000,5);
    customer A2("rohit",121,1200,10);
    // customer::total_customer = 5;
    // A1.deposit(800);
    // A1.withdraw(500);
    // customer::acceStatic();
    // A1.display_total();
    // A1.display();
    // A2.display();
    // customer A3("messi",131,1800);
    // A3.display();
    // A1.display_total();
    // A1.balance+=-10;
    A1.deposit(220);
    A1.display();

    // we use  abstraction in backend how our code works hwat ever the resuit we get how it running in the backend.
}