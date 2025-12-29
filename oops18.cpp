#include<iostream>
#include<algorithm>
#include<vector>
#include<exception>
#include<fstream>
using namespace std;


int main()
{

    vector<int>arr(5);
    cout<<"enter the input :";
    for(int i=0;i<5;i++)
    cin>>arr[i];

    ifstream fin;
    fin.open("file1.text");
    int a;
    a = fin.get();
    for(int i=0;i<5;i++)
    fin>>arr[i];
    
    sort (arr.begin(),arr.end());

    for(int i=0;i<5;i++)
    {
        a = fin.get();
    };

    fin.close();

}