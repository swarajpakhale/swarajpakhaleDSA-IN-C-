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


// by using recursion to insert node at particular position

// creating a linked list

node *createlinkedlist(int arr[],int index,int size)
{
    if(index==size)
    return NULL;

    node *temp = new node(arr[index]);
    temp->next = createlinkedlist(arr,index+1,size);
    return temp;

}

// insert node at particular position
node *insertatposition(node *head,int x,int value)
{
    if(x==0)
    {
        node *temp = new node(value);
        temp->next = head;
        return temp; 
    }

    head->next = insertatposition(head->next,x-1,value);
    return head;
}



int main()
{
    int arr[] = {2,4,6,8,10};

    node *head = createlinkedlist(arr,0,5);

    int x = 3;
    int value = 30;

    head = insertatposition(head,x,value);

    node *temp = head;

    while(temp)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }

}