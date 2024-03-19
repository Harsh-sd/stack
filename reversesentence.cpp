#include <iostream>
#include <stack>
using namespace std;
stack<string> st;
void reversesentence(string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        string word = "";
        while (s[i] != ' ' && i < s.length())
        {
            word += s[i];
            i++;
        };
        st.push(word);
    }
    while (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }
    cout << endl;
}
int main()
{
    stack<string> st;
    string s = " how are you doing?";
    reversesentence(s);
    return 0;
}
