#include <iostream>
#include <stdlib.h>
using namespace std;


struct node
{
    int data;
    struct node * link;
};
class Stack
{
    private:
        struct node * head;
    public:
        Stack();
        void push(int x);
        int pop();
        bool is_empty();
        bool is_full();
        void print_all_elements();
        int stack_top() {return head->data;} // peek();
        ~Stack();
};

Stack::Stack()
{
    head=NULL;
}

Stack::~Stack ()
{
    delete head;
}

bool Stack::is_empty()
{
    if (head == NULL)
        return true;
    return false;
}

bool Stack::is_full()
{
    struct node * ptr;
    ptr=(struct node *) malloc(sizeof(struct node));
    if (ptr==NULL)
        return true;
    free (ptr);
    return false;
}

void Stack::push(int item)
{
    struct node * ptr;
    if (is_full())
    {
        cout << "Stack is overflow item "<<item << " not pushed "<<endl;

        return;
    }
    //ptr=(struct node *) malloc(sizeof(struct node));
    ptr= new struct node;
    ptr->data = item;
    ptr->link=head;
    head=ptr;

}

int Stack::pop()
{
    if (is_empty())
    {
        cout << "Stack is underflow"<<endl;
            return -1;
    }
    int item = head->data;
    head=head->link;
    return item;
}

void Stack::print_all_elements()
{
    struct node * ptr;

    ptr = head;
    while (ptr!=NULL)
       {
          cout <<ptr->data<< " "<<endl;
           ptr=ptr->link;
       }
}

int main()
{
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);

    s.print_all_elements();
    cout <<endl<<"============="<<endl;
    s.pop();
    s.print_all_elements();
    cout << " stack top value = "<<s.stack_top()<<endl;





}




