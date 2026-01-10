#include<iostream>
#include<stack>
#include<vector>
using namespace std;

// // when we create vector the memory is allocated in the heap at that time if their 
// is space then it we make an array and put the elements their but if the array is full
//  then it sees were it is getting space and it will put elemts thir by taking double size array due to which our time compelexity increases



int main()
{
    stack<int>s;
    s.push(9);
    s.push(10);
    s.push(93);
    cout<<s.size()<<endl;
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.size()<<endl;
    cout<<s.empty()<<endl;
}
