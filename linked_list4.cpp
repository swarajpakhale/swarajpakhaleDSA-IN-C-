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

node *createlinkedlist(int arr[],int index,int size, node *prev)
{
    if(index==size)
    {
        return prev;
    }

    node *temp;
    temp = new node(arr[index]);
    temp->next = prev;
    return createlinkedlist(arr,index+1,size,temp);
}


int main()
{
    node *head;
    // head = new node(4);
    head = NULL;

    // cout<<head->data<<endl;
    // cout<<head->next<<endl;


    // insert the node at the end by using recursion

    // if linked list is emty
    int arr[] = {2,4,6,8,10};

    head = createlinkedlist(arr,0,5,head);

    // now run the above values

        node *temp = head;

        while(temp)
        {
        cout<<temp->data<<" ";
        temp = temp->next;
        }


}