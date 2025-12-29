#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class customer
{
    public:

    string name;
    int account_number,balance;

    customer(string name,int account_number,int balance)
    {
        this->name = name;
        this->account_number = account_number;
        this->balance = balance;
    }

    // deposit

    void deposit(int amount)
    {
        if(balance>0)
        {
            balance+=amount;
            cout<<amount<<" rs is credited from account\n";
        }
        else if(amount<0)
        {
            throw runtime_error(" your amount should be greater than 0\n");
        }
        else
        {
            throw runtime_error(" your amount is low\n");
        }

    }

//     // withdraw

    void withdraw(int amount)
    {
        if(amount>0&&amount<=balance)
        {
            balance-=amount;
            cout<<amount<<" rs is debited from account\n";
        }
        else if(amount<0)
        {
            throw runtime_error(" amount should be greater than 0\n");
        }
        else
        {
            throw runtime_error(" your balance is low\n");
        }

    }
};

int main()
{
    customer C1("swaraj",10,1000);
    try{
    C1.deposit(100);
    C1.withdraw(2000);
    }
    catch(const runtime_error &e)
    {
        cout<<"exception occured :"<<e.what()<<endl;
    }


    // here run_time eror is a class

    // try catch throw

    // int a,b;
    // cin>>a>>b;
    // try{
    // if(b==0)
    // throw "divide by zero is not possible\n";
    // int c = a/b;
    // cout<<c<<endl;
    // }
    // catch(const char *e)
    // {
    //     cout<<"exception occured :"<<e<<endl;
    // }


    // int a,b;
    // cin>>a>>b;
    // try{
    // if(b==0)
    // throw 4;
    // int c = a/b;
    // cout<<c<<endl;
    // }
    // catch(int e)
    // {
    //     cout<<"exception occured :"<<e<<endl;
    // }

}