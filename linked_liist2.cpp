#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

class node
{
    public:

    int data;
    node *next;

    node(int value)
    {
        data = value;
        next = NULL;
    }

};


int main()
{
    node *head,*tail;
    // head = new node(4);
    head = tail =  NULL;

    // cout<<head->data<<endl;
    // cout<<head->next<<endl;


    // insert the node at the end

    // if linked list is emty
    // int arr[] = {2,4,6,8,10};

    // for(int i=0;i<5;i++)
    // {

    //     if(head==NULL)
    //     {
    //     head = new node(arr[i]);
    //     tail = head;
    //     }
    //     else
    //     {
    //         tail->next = new node(arr[i]);
    //         tail = tail->next;
    //     }
    // }

    int arr[] = {2,4,6,8,10};

    for(int i=0;i<5;i++)
    {
        if(head==NULL)
        {
            head = new node(arr[i]);
            tail = head;
        }
        else
        {
            tail->next = new node(arr[i]);
            tail = tail->next;       
        }

    }

    // now run the above values

       node *temp = head;

        while(temp)
        {
        cout<<temp->data<<" ";
        temp = temp->next;
        }


}