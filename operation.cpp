#include <iostream>
using namespace std;
#define n 100
class stack
{
    int *arr;
    int top;

public:
    stack()
    {
        arr = new int[n];
        int top = -1;
    };
    void push(int x)
    {
        if (top == n - 1)
        {
            cout << "stack overflow" << endl;
            return;
        };
        top++;
        arr[top] = x;
    }
    void pop()
    {
        if (top == -1)
        {
            cout << "no element to pop" << endl;
            return;
        }
        top--;
    }
    int gettop()
    {
        if (top == -1)
        {
            cout << "no element in stack" << endl;
            return -1;
        }
        return arr[top];
    }
    bool empty()
    {
        if (top == -1)
        {
            cout << "stack is empty" << endl;
            return true;
        }
        return false;
    }
};
int main()
{
    stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);
    st.pop();
    cout << st.gettop();
    st.pop();
    st.pop();
    cout << st.gettop();
    st.empty();
    return 0;
}