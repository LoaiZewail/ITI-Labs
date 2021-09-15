#include <iostream>
#define MAX_SIZE 10
using namespace std;

class Stack
{
    private:
        int items[MAX_SIZE];
        int top;
    public:
        Stack()
            {
                top = -1;
            }
        void push(int x);
        int pop();
        bool is_empty();
        bool is_full();
        void print_all_elements();
        int stack_top()
        {
            return items[top];
        }  // peek()
};

// Is_empty Function
bool Stack::is_empty()
{
    if (top == -1)
        return true;
    return false;
}
////////////////////////////////////////////////////////////////////////////////////
//Is_full Function
bool Stack::is_full()
{
    if (top == MAX_SIZE-1)
        return true;
return false;
}

void Stack::push(int item)
{
    if (is_full())
    {
        cout << "Stack is overflow item "<<item << " not pushed "<<endl;
        return;
    }
    top++;
    items[top] = item;
}

int Stack::pop()
{
    if (is_empty())
    {
        cout << "Stack is underflow"<<endl;
            return -1;
    }
    int item = items[top];
    top--;
    return item;
}

void Stack::print_all_elements()
{
    //cout << "top ="<<top<<endl;
    for (int i = top; i >= 0; i--)
        cout << i<<":"<<items[i] << " "<<endl;
    cout <<endl;
}

int main()
{
    Stack s;
    int popedvalue;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);

    s.print_all_elements();
    popedvalue=s.pop();
    cout << " poped value is ="<<popedvalue<<endl;
    cout << " stack after pop\n";
    s.print_all_elements();
    s.pop();
    s.print_all_elements();
    cout << " stack top value = "<<s.stack_top()<<endl;
    cout << " stack top value = "<<s.stack_top()<<endl;
    cout << " stack top value = "<<s.stack_top()<<endl<<endl;

    cout << " stack pop value = "<<s.pop()<<endl;
    cout << " stack pop value = "<<s.pop()<<endl;
    cout << " stack pop value = "<<s.pop()<<endl;
    cout << " stack pop value = "<<s.pop()<<endl;
    cout << " stack pop value = "<<s.pop()<<endl;
    cout << " stack pop value = "<<s.pop()<<endl;
    cout << " stack pop value = "<<s.pop()<<endl;
    cout << " stack pop value = "<<s.pop()<<endl;
    cout << " stack pop value = "<<s.pop()<<endl;
}
