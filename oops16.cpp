#include<iostream>
#include<algorithm>
#include<vector>
#include<exception>
#include<fstream>
using namespace std;

int main()
{
    // file ko open karna
    // ofstream fout;
    // fout.open("zoom.text"); //  khud se create kar denga fir open kar denga
    // // write kar sakta hu
    // fout<<"hello india";
    // fout.close();


    // file ko open karna
    ifstream fin;
    fin.open("zoom.text"); // khud se create kar denga fir open kar denga

    char c;
    c = fin.get();

    while(!fin.eof())
    {
        cout<<c;
        c = fin.get();
    };

    fin.close();



}













