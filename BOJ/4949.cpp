#include<iostream>
#include<stack>
#include<string>
#include<cstdlib>
#include<string.h>
#include<vector>
#include<memory.h>


using namespace std;

char temp[1005];
int main()
{   
    vector<string>ans;
    while(1)
    {
        cin.getline(temp, 1005);
        if(temp[0] == '.') return 0;
        bool flag = true;
        int len = strlen(temp);
        stack<char>st;
        for(int i =0; i<len; i++)
        {
            if(temp[i] == '(' || temp[i] == '[')
            {
                st.push(temp[i]);
            }
            else if(temp[i] == ']' || temp[i] == ')')
            {
                if(st.empty())
                {
                    flag = false;
                    break;
                }
                else
                {
                    if(temp[i] == ')')
                    {
                        if(st.top() == '(')
                        {
                            st.pop();
                            continue;
                        }
                        else
                        {
                            flag = false;
                            break;
                        }
                        
                    }
                    else if(temp[i] == ']')
                    {
                        if(st.top() == '[')
                        {
                            st.pop();
                            continue;
                        }
                        else
                        {
                            flag = false;
                            break;
                        }
                        
                    }
                }
            } 
        }
        if(st.empty() && flag == true)
        {
            cout << "yes" << "\n";
        }
        else
        {
            cout << "no" << "\n";
        }
        }
        
}
