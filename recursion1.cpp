#include<iostream>
#include<vector>
using namespace std;

void print(int N)
{
    if(N==1)
    {
        cout<<N<<endl;
        return;
    }
    cout<<N<<endl;
    
    
}

int main()
{
    int N;
    cin>>N;
    print(N);
}


void print(int num,int N)
{
    if(num==N)
    {
        cout<<num<<endl;
        return;
    }
    cout<<num<<endl;
    print(num+2,N);
    
}

int main()
{
    int N;
    cin>>N;
    print(2,N);
}

void printeven(int num,int N)
{
    if(num==N)
    {
        cout<<num<<endl;
        return;
    }
    cout<<num<<endl;
    printeven(num+2,N);
   
}

int main()
{
    int N;
    cin>>N;
    if(N%2==1)
    N--;
    printeven(2,N);
}

void printeven(int N)
{
    if(N==2)
    {
        cout<<N<<endl;
        return;
    }
    cout<<N<<endl;
    printeven(N-2);
    
   
}

int main()
{
    int N;
    cin>>N;
    // if(N%2==1)
    // N--;
    printeven(N);
}

void printodd(int N)
{
    if(N==1)
    {
        cout<<N<<endl;
        return;
    }
    printodd(N-2);
    cout<<N<<endl;
    
    
   
}

int main()
{
    int N;
    cin>>N;
    if(N%2==0)
    N++;
    printodd(N);
}



void print(int n)
{
    if(n==0)
    return;

    cout<<"coder army"<<endl;;
    print(n-1);
}

int main()
{
    int n=10;
    print(n);

}


int printodd(int n)
{
    if(n==1)
    {
        cout<<n<<endl;
        return 0;
    }

    cout<<n<<endl;
    printodd(n-2);
}

int main()
{
    int n;
    cin>>n;
    if(n%2==0)
    n--;
    printodd(n);
}


void print(int n)
{
    if(n==10)
    {
        cout<<10<<endl;
        return;
    }
    cout<<n<<endl;
    print(n+1);
    
}

int main()
{
    int n;
    cin>>n;
    print(n);
}


void print(int num,int n)
{
    if(num==n)
    {
        cout<<num<<endl;
        return;
    }
    print(num+1,n);
    cout<<num<<endl;
    
    

}
int main()
{
    int n;
    cin>>n;
    print(1,n);

}


void print(int n)
{
    if(n==1)
    {
        cout<<1<<endl;
        return;
    }
    print(n-1);
    cout<<n<<endl;
}


int main()
{
    int n;
    cin>>n;
    print(n);

}



void print(int n)
{
    if(n==1)
    {
        cout<<1<<endl;
        return;
    }
    // print(n-2);
    cout<<n<<endl;
    print(n-2);
}


int main()
{
    int n;
    cin>>n;
    // if(n%2==1)
    // n--;
    print(n);
}

void print(int n,int i)
{
    if(i>10)
    return;
    
    cout<<n<<"*"<<i<<"="<<n*i<<endl;
    print(n,i+1);
}

int main()
{
    int n;
    cin>>n;
    
    print(3,1);

}

bool checkprime(int n,int i=2)
{
    if(n<=2)
    return (n==2);

    if(n%i==0)
    return false;

    if(i*i>n)
    return true;
    
    return checkprime(n,i+1);
}
int main()
{
    int n;
    cin>>n;

    if(checkprime(n))
    {
        cout<<"prime number";
    }
    else
    {
        cout<<"not a prime number";
    }
    return 0;
}


































