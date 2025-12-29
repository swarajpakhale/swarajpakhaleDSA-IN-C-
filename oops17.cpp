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

    ofstream fout;
    fout.open("zero.text");
    fout<<"original data \n";
    for(int i=0;i<5;i++)
    {
        fout<<arr[i]<<" ";
    };
    fout<<"\n sorted data \n";
    
    sort (arr.begin(),arr.end());

    for(int i=0;i<5;i++)
    {
        fout<<arr[i]<<" ";
    };

    ofstream fout;
    fout.open("z1.text");
    fout<<"hello india\n";
    fout<<"hello swaraj\n";
    fout<<"hello rohit bhaiya\n";
    fout.close();


    ifstream fin;
    fin.open("z1.text");

    string line;

    while(getline(fin,line));
    {
        cout<<line<<endl;
    }
    fin.close();

}