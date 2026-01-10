#include<iostream>
#include<algorithm>
#include<vector>
#include<stack>

using namespace std;

bool check(string str)
{
    stack<char>s;

    for(int i=0;i<str.size();i++)
    {
        if(str[i]=='(')
        s.push(str[i]);

        else
        {
            if(s.empty())
            return 0;
            else
            s.pop();        
        }
    }

    return s.empty();

}

int main()
{
    string str = "((()))";
    cout<<check(str)<<endl;
    return 0;
}


bool check(string str)
{
    int left = 0;
    for(int i=0;i<str.size();i++)
    {
        if(str[i]=='(')
        left++;
        else
        {
            if(left==0)
            return 0;
            else
            left--;
        }
    }

    return left==0;

}

int main()
{
    string str = "(()()(())";
    cout<<check(str)<<endl;
    return 0;
    
}












































