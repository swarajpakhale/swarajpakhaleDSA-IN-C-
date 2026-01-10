#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

// Implementation of stack using array

class stack
{
    int  *arr;
    int  size;
    int  top;

    public:
    
    bool flag;  

    // Now creating Constructor

    stack(int s)
    {
        size = s;
        top = -1;
        arr = new int[s];
        flag = 1;  // this flag tells us if the flag is empty then its value is 1
    }

    // Now performing operations into the stack

    // 1.push
    void push(int value)
    {
        if(top == size-1)
        {
            cout<<"stack overflow ";
            return;
        }
        else
        {
            top++;
            arr[top] = value;
            cout<<"pushed "<<value<<" "<<"into the stack\n";
            flag = 0;
        }
    }
    // 2. pop
    void pop()
    {
        if(top==-1)
        {
            cout<<"stack underflow\n";
            return;
        }
        else
        {
            
            cout<<"popped "<<arr[top+1]<<" "<<"from the stack\n";
            top--;
            if(top==-1)
            flag = 1;
            
        }
    }
    // 3.peek
    int peek()
    {
        if (top == -1)
        {
        cout << "Stack is empty\n";
        return -1;   // or any invalid value
        }
        else
        {
        return arr[top];
        }
    }

    // 4.Is size

    int Issize()
    {

        return top+1;

    }
    // 5.Is empty

    bool IsEmpty()
    {

        return top==-1;

    }
    

};





int main()
{
    stack s(5);
    // s.push(10);
    // s.push(3);
    // s.push(9);
    // s.push(11);
    // s.push(16);
   
    // cout<<s.peek()<<endl;
    // s.push(7);
    // cout<<s.peek()<<endl;
    // s.pop();
    // cout<<s.IsEmpty()<<endl;
    // cout<<s.Issize()<<endl;

    // s.push(-1);

    // cout<<s.peek()<<endl;

    int value = s.peek();

    if(s.flag==0)
    
    cout<<value<<endl;
    

}
















































