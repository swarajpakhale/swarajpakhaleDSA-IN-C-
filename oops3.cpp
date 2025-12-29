#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

// cunstructor
class customer
{
    string name;
    int account_number;
    int balance;

    public:

    customer()
    {
    cout<<"constructor is called \n";
    }

    // Default constructor
    customer()
    {
        name = "swaraj";
        account_number = 10;
        balance = 123;
    }

    // parameterised constructor
    customer(string name,int account_number,int balance)
    {
        this->name = name;
        this->account_number = account_number;
        this->balance = balance;
    }

    // constructor overloading
    customer(string a,int b)
    {
        name = a;
        account_number = b;
        balance = 94;
    }
    // inline constructor
    customer(string a,int b,int c): name(a),account_number(b),balance(c){

    }
    // copy constructor
    customer(customer &B)
    {
        name = B.name;
        account_number = B.account_number;
        balance = B.balance;
    }
    void display()
    {
        cout<<name<<" "<<account_number<<" "<<balance<<endl;
    }

};


// int main()
// {
//     customer A1;
//     customer A2("swaraj",96997979,123);
//     customer A3("swaraj",23);
//     A1.display();
//     A2.display();
//     A3.display();
//     customer A4(A3);
//     A4.display();
//     customer A5;
//     A5 = A3;
//     A5.display();

// }



// Destructor

    class customer
    {
        string name;
        int *data;

        public:

        customer()
        {
            name = "4";
            cout<<"constructor is"<<" "<<name<<endl;
        }
        customer(string name)
        {
            this->name = name;
            cout<<"constructor is"<<" "<<name<<endl;
        }

        ~customer()
        {
            cout<<"destructor is"<<" "<<name<<endl;
        }

        customer()
        {
            cout<<"constructor is called\n";
        }

        // destructor
        ~customer()
        {
            cout<<"destructor is called\n";
        }
        
    };

    int main()
    {
        customer A1("1"),A2("2"),A3("3");
        customer *A4  = new customer;
        delete A4;
    }







































































































