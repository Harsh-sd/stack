#include <iostream>
#include <stack>
using namespace std;
// initialized the stack
stack<int> st;
// this will return the result
int postfix(string s)
{
    // In case of postfix traverse from start
    for (int i = 0; i < s.length(); i++)
    {
        // this is done for the purpose of ascii value
        if (s[i] >= '0' && s[i] <= '9')
        {
            st.push(s[i] - '0');
        }
        else
        {

            int op2 = st.top();
            st.pop();
            int op1 = st.top();
            st.pop();
            switch (s[i])
            {
            case '+':
                st.push(op1 + op2);
                break;
            case '-':
                st.push(op1 - op2);
                break;
            case '*':
                st.push(op1 * op2);
                break;
            case '/':
                st.push(op1 / op2);
                break;
            case '^':
                st.push(op1 ^ op2);
                break;

            default:
                break;
            }
        }
    }
    return st.top();
}
int main()
{
    string s = "46+2/5*7+";
    cout << postfix(s);
}