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


// By using recursion 

node *createDLL(int arr[],int index,int size,node *prev)
{
    if(index==size)
    return prev;

    node *temp = new node(arr[index]);
    temp->next = prev;
    return createDLL(arr,index+1,size,temp);
    
}

// node *createDLL(int arr[],int index,int size)
// {
//     if(index==size)
//     return NULL;

//     node *temp = new node(arr[index]);
//     temp->next = createDLL(arr,index+1,size); 
//     return temp;
// }



int main()
{
    node *temp = NULL;
    node *head = NULL;
    node *tail = NULL;
    int arr[] = {2,4,6,8,10};
    
    // function call 
    head = createDLL(arr,0,5,head);
    // head = createDLL(arr,0,5);
    // for(int i=0;i<5;i++)
    // {
    //     if(head==NULL)
    //     {
    //         head = new node(arr[i]);
    //     }
    //     else
    //     {
    //         node *temp = new node(arr[i]);
    //         temp->next = head;
    //         head->prev = temp;
    //         head = temp;
    //     }
    // }

    node *trav  = head;
    while(trav)
    {
        cout<<trav->data<<" ";
        trav = trav->next;
    }

}