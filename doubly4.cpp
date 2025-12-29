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

node *createDLL(int arr[],int index,int size,node *back)
{
    if(index==size)
    return NULL;

    node *temp = new node(arr[index]);
    temp->prev = back;
    temp->next = createDLL(arr,index+1,size,temp);
    return temp;
}



int main()
{
    node *temp = NULL;
    node *head = NULL;
    node *tail = NULL;

    int arr[] = {2,4,6,8,10};
    
    // function call 
    head = createDLL(arr,0,5,NULL);

    int pos = 3;

    // there are three edge cases to handle insert at particular position

    // 1. insert at start
    
        // if(pos==0)
        // {
        //     if(head==NULL)
        //     {
        //     head = new node(5);
        //     }
        //     else
        //     {
        //     temp = new node(5);
        //     temp->next = head;
        //     temp->prev = NULL;
        //     head = temp;
        //     }
        // }
        // else
        // {
        //     // insert at the end

        //     node *curr = head;
        //     node *prev = NULL;
        //     while(--pos)
        //     {
        //     curr = curr->next;
        //     }

        //     if(curr->next==NULL)
        //     {
        //         temp = new node(5);
        //         temp->prev = curr;
        //         curr->next = temp;               
        //     }
        //     else
        //     {
        //         // insert at the particuler position
        //         temp = new node(5);
        //         temp->next = curr->next;
        //         temp->prev = curr;
        //         curr->next = temp;
        //         temp->next->prev = temp;
        //     }
           
        // }


        // delete the node at the start

        if(pos==1)
        {
            if(head->next==NULL)
            {
                delete head;
                head = NULL;
            }
            else
            {
                temp = head;
                head = head->next;
                delete temp;
                if(head)
                head->prev = NULL;

            }

        } 
        else
        {
            //  delete the node at the end
            node *curr = head;

            while(--pos)
            curr = curr->next;

            if(curr->next==NULL)
            {
                curr->prev->next = NULL;
                delete curr; 
            }
            else
            {
                // delete the node at a particular position
                curr->prev->next = curr->next;
                curr->next->prev = curr->prev;
                delete curr;
                
            }
            
        }
        
        
        // to print the values

        node *trav  = head;
        while(trav)
        {
        cout<<trav->data<<" ";
        trav = trav->next;
        }

}