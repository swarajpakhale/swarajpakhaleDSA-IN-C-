#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

// Implementation of stack using Linked list

class node
{
    public:
    int data;
    node *next;

    node(int value)
    {
        data = value;
        next = NULL;
    }

};

class stack
{
    node *top;
    int size;

    public:  

    // Now creating Constructor

    stack(int s)
    {
        top = NULL;
        size = 0;
    }

    // Now performing operations into the stack

    // 1.push
    void push(int value)
    {
        node *temp = new node(value);
        if(temp==NULL)
        {
            cout<<"stack overflow\n";
            return;
        }
        else
        {
        temp->next = top;
        top = temp;
        size++;
        cout<<"pushed "<<value<<" into the stack\n";
        }
    }

    // 2. pop

    void pop()
    {
        if(top==NULL)
        {
            cout<<"stack is underflow\n";
            return;
        }
        else
        {
            node *temp = top;
            cout<<"popped "<<top->data<<" form the stack\n";
            top = top->next;
            delete temp;
            size--;
        }
        
    }
    // 3.peek

    int peek()
    {
        if(top == NULL)
        {
            cout<<"stack is empty\n ";
            return -1;
        }
        else
        {
            return top->data;
        }      
    }

    // 4.Is size

    int Issize()
    {

        return size;

    }

    // 5.Is empty

    bool IsEmpty()
    {

       return top == NULL;

    }
    

};





int main()
{
    stack s(5);
    s.push(100);
    s.push(199);
    s.push(196);
    s.push(193);
    s.push(93);
    s.push(10);
    s.push(20);
    s.pop();
    s.pop();
    // s.pop();
    // s.pop();
    s.push(83);
    cout<<s.peek()<<endl;
    cout<<s.peek()<<endl;
    cout<<s.peek()<<endl;
    cout<<s.Issize()<<endl;
    cout<<s.IsEmpty()<<endl;  // if the empty gives 0 then the stack if full and if it gives 1 then stck is full

}













































