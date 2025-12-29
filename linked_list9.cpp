#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

class node
{
    public:

    int data;
    node *next = NULL;
    node *prev = NULL;

    node(int value)
    {
        data = value;
        next = NULL;
    }

};
int main()
{
    node *temp = NULL;
    node *head = NULL;


    if(head == NULL)
    {
        head = new node(5);
    }
    else
    {
        temp = new node(5);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }

    node *trav  = head;
    while(trav)
    {
        cout<<trav->data<<" ";
        trav = trav->next;
    }




}