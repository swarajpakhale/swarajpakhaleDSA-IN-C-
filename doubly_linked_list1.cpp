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
    node *tail = NULL;
    int arr[] = {2,4,6,8,10};
    
    for(int i=0;i<5;i++)
    {
        if(head == NULL)
        {
        head = new node(arr[i]);
        tail = head;
        }
        else
        {
        temp = new node(arr[i]);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
        }
    }

    if(head==NULL)
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