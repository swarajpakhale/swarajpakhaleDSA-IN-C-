#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

// virtual function
class animal
{
    public:

    virtual void speak()=0; // abstract class
    // {
    //     cout<<"huhu\n";
    // }
};

class dog: public animal
{
    public:

    void speak()
    {
        cout<<"Bark\n";
    }
};


class cat: public animal
{
    public:

    void speak()
    {
        cout<<"meow\n";
    }
};

class nephew: public animal
{
    public:

    void speak()
    {
        cout<<"wow wow\n";
    }
};



int main()
{
    // animal *p;
    // p = new dog();
    // p->speak();

    animal *p;
    vector<animal*>animals;
    animals.push_back(new dog());
    animals.push_back(new cat());
    // animals.push_back(new animal());
    animals.push_back(new dog());
    animals.push_back(new cat());
    animals.push_back(new nephew());

    for(int i=0;i<animals.size();i++)
    {
        p = animals[i];
        p->speak();
    }

}