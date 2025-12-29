#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

// class node
// {
//     public:
//     int data;
//     node *next;

//     node(int value)
//     {
//         data = value;
//         next = NULL;
//     }

// };

// node *createlinkedlist(int arr[],int index,int size)
// {
//     if(index==size)
//     return NULL;

//     node *temp = new node(arr[index]);
//     temp->next = createlinkedlist(arr,index+1,size);
//     return temp;

// }


// int main()
// {
//     node *head = NULL;

//     int arr[] = {2,4,6,8,10};

//     head = createlinkedlist(arr,0,5);

//     // using deletion process to delete the first node

//     if(head!=NULL)
//     {
//         node *temp = head;
//         head = head->next;
//         delete temp;
//     }

//     node *temp = head;

//     while(temp)
//     {
//         cout<<temp->data<<" ";
//         temp = temp->next;
//     }

// }


// class node
// {
//     public:
//     int data;
//     node *next;

//     node(int value)
//     {
//         data = value;
//         next = NULL;
//     }

// };

// node *createlinkedlist(int arr[],int index,int size)
// {
//     if(index==size)
//     return NULL;

//     node *temp = new node(arr[index]);
//     temp->next = createlinkedlist(arr,index+1,size);
//     return temp;

// }


// int main()
// {
//     node *head = NULL;

//     int arr[] = {2,4,6,8,10};

//     head = createlinkedlist(arr,0,5);

//     // using deletion process to delete the last node

//     // only 1 node is present

    
//     if(head!=NULL)
//     {
//         // only 1 node is present
//         if(head->next==NULL)
//         {
//             node *temp = head;
//             delete temp;
//             head = NULL;   
//         }
//         else
//         {
//             // more than one node is present
//             node *current = head;
//             node *prev = NULL;

//             while(current->next!=NULL)
//             {
//                 prev = current;
//                 current = current->next;
//             }
//             prev->next = NULL;
//             delete current;
//         }

//     }

//     node *temp = head;

//     while(temp)
//     {
//         cout<<temp->data<<" ";
//         temp = temp->next;
//     }

// }



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

node *createlinkedlist(int arr[],int index,int size)
{
    if(index==size)
    return NULL;

    node *temp = new node(arr[index]);
    temp->next = createlinkedlist(arr,index+1,size);
    return temp;

}


int main()
{
    node *head = NULL;

    int arr[] = {2,4,6,8,10};

    head = createlinkedlist(arr,0,5);

    // using deletion process to delete at particular node

    int x = 3;
    int value = 8;

    if(x==1)
        {
            // only 1 node is present
            node *temp = head;
            head = head->next;
            delete temp;
            
        }
        else
        {
            // if the last node also exit
            
            x--;
            node *current = head;
            node *prev = NULL;
            
            while(x--)
            {
                prev = current;
                current = current->next;
            }
            prev->next = current->next;
            delete current;
            
        }


    node *temp = head;

    while(temp)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }

}










































