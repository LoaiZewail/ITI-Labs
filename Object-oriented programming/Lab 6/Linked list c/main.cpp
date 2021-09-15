#include <iostream>
#include <stdlib.h>

using namespace std;

typedef struct node
{
    int data;
    struct node *link;
}mynode;

int main()
{
    mynode *head;
    mynode *ptr;

    //create linked list

    head =(mynode*) malloc(sizeof(mynode));
    ptr=head;

    head->data=10;

    for (int i=1;i<6;i++)
    {
    ptr->link =(mynode*) malloc(sizeof(mynode));
    ptr=ptr->link;
    ptr->data=i*10;
    }
    ptr->link=NULL;

    //print linked list

    ptr=head;
    while (ptr!=NULL)
    {
        cout << ptr->data << endl;
        ptr=ptr->link;
    }

    return 0;
}
