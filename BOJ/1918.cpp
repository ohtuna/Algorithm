#include<iostream>
#include<stack>
#include<string>

using namespace std;

string ans;

int prec(char ch)
{
    switch (ch)
    {
    case '(': case ')': return 0;
    case '+': case '-': return 1;
    case '*': case '/': return 2;
    }
    return -1;
}

void infix_to_postfix(string &s)
{
    stack<char>st;

    for(int i =0; i<s.size(); i++)
    {
        char ch = s[i];
        switch (ch)
        {
        case '+': case '-': case '*': case '/':
        while(!st.empty() && (prec(ch) <= prec(st.top())))
        {
            ans.push_back(st.top());
            st.pop();
        }
        st.push(ch);
        break;
        case '(':
        st.push(ch);
        break;
        case ')':
        while(st.top() != '(')
        {
            ans.push_back(st.top());
            st.pop();
        }
        st.pop();
        break;
        
        default:
            ans.push_back(ch);
            break;
        }
    }

    while(!st.empty())
    {
        ans.push_back(st.top());
        st.pop();
    }
}

int main()
{
    string str;

    cin >> str;

    infix_to_postfix(str);

    cout << ans;

}
