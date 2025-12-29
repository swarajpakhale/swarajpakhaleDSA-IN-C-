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

node *createlinkedlist(int arr[],int index,int size)
{
    if(index==size)
    return NULL;

    node *temp;
    temp = new node(arr[index]);
    temp->next = createlinkedlist(arr,index+1,size);

    return temp;
}


int main()
{
    node *head;
    // head = new node(4);
    head = NULL;

    // cout<<head->data<<endl;
    // cout<<head->next<<endl;


    // insert the node at the particular position

    // if linked list is emty
    int arr[] = {2,4,6,8,10};

   head = createlinkedlist(arr,0,5);

   int x = 3;
   int value = 30;

   node *temp = head; 
   x--;

   while(x--)
   {
      temp = temp->next;  

   }

   node *temp2 = new node(value);
   temp2->next = temp->next;
   temp->next = temp2;

    // now run the above values

        temp = head;
        while(temp)
        {
        cout<<temp->data<<" ";
        temp = temp->next;
        }


}