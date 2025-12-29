#include<iostream>
using namespace std;
int main()

//  void sum(int a,int b)    //fuction declartion
// {
//     int ans=a+b;          //function define
//     cout<<ans;
// }

// int mul(int a,int b)
// {
//     int ans=a*b;
//     return ans;
// }
// void fun()
// {
//     cout<<"hello coder army\n";
// }

// int main()
// {
//   int a,b;
//   cout<<"enter the 2 number";     //function call
//   cin>>a>>b;

//   sum(a,b);
//   cout<<endl;
//   cout<<mul(a,b);
//   cout<<endl;
   
//   fun();

// }


// bool prime(int n)
// {
//     if(n<2)
//     {
//         return 0;
//     }
//     for(int i=2;i<n;i++)
//     {
//         if(n%i==0)
//         {
//             return 0;
//         }
//         return 1;
//     }  
// }

// int fact(int n=3)  //default parameter
// {
    
    

//         int ans=1;
//         for(int i=1;i<=n;i++)
//         ans=ans*i;
//         return ans;
    
// }


// int main()
// {
//     int a,b;
//     cout<<"enter the 2 number:";
//     cin>>a>>b;

//     cout<<prime(a)<<endl;
//     cout<<fact(a)<<endl;
//     cout<<prime(b)<<endl;
//     cout<<fact(b)<<endl;
//     cout<<prime(b-a)<<endl;
//     cout<<fact(b-a)<<endl;

// }


// void swap (int &a,int &b)  //pass by reference
// {
//     int c;
//     c=a;
//     a=b;
//     b=c;
// }
// void swap(float &c,float &d) //function overloading
// {
//     float r=c;
//     c=d;
//     d=r;

// }

// int main()
// {
//     int a,b;
//     cout<<"enter the number";
//     cin>>a>>b;

//     swap(a,b);
//     cout<<a<<" "<<b<<" "<<endl;
//     float f1=9.8,f2=8.9;
//     swap(f1,f2);
//     cout<<f1<<" "<<f2<<" "<<endl;

// }


// char convert(char name)
// {
//     char ans= name-'a'+'A';
//     return ans;
// }
 
// int main()
// {
//     char name;
//     cout<<"enter the character";
//     cin>>name;

//     cout<<convert(name)<<endl;


//     return 0;
// }

// int countDigit(int num) {
//     int count = 0;
//     if (num == 0) return 1; // handle case when num = 0
//     while (num) {
//         count++;
//         num /= 10;
//     }
//     return count;
// }

// bool armstrong(int num, int digit)
//  {
//     int n = num, ans = 0, rem;
//     while (n)
//     {
//         rem = n % 10;
//         n /= 10;
//         ans += pow(rem, digit);
//     }
//     if (ans == num)  // use comparison, not assignment
//         return true;
//     else
//         return false;
// }

// int main() {
//     int num;
//     cin >> num;
//     // count digits
//     int digit = countDigit(num);
//     // check armstrong number
//     cout << armstrong(num, digit) << endl;
//     return 0;
// }




// {
//     int count=0;

//     while(n>=5)
//     {
//         count+=n/5;
//         n/=5;
//     }
//     return count;
// };



// {
// char a,b,c,d; 
// cout<<"enter four sides";
// cin>>a>>b>>c>>d;
// if(('a'=='b'&&'c'=='d')||('a'=='c'&&'b'=='d')||('a'=='b'&&'c'=='d'))
// {
// cout<<"it can form a rectangle";
// }
// else
// {
//     cout<<"it can not form a rectangle";
// }
// return 0;
// }




// bishop program

// {
//    int count=0;
//    char A,B;
//    count+=min(8-A,8-B);
//    count+=min(8-A,B-1);
//    count+=min(A-1,B-1);
//    count+=min(A-1,B-8);
//    return count;
// }

// nim game
// {
// int num;
// cout<<"choose the number";
// cin>>num;
// if(num%4==0)
// cout<<0<<endl;
// else
// cout<<1<<endl;
// }


























