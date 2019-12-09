#include<iostream>
#include<string>
#include<stack>


using namespace std;

int main()
{
    long long ans = 0;

    stack<char>op;
    stack<long long>num;

    int cnt = 0;
    long long a = 0;
    long long b = 0;
    while(1)
    {
        if(cnt %2 ==0)
        { 
            cin >> a;
            if(num.empty())
            {
                num.push(a);
            }
            else
            {
                b = num.top();
                num.pop();
                char oper = op.top();
                op.pop();
                if(oper == '+')
                {
                    num.push(a+b);
                }
                else if(oper == '-')
                {
                    num.push(b-a);
                }
                else if(oper == '*')
                {
                    num.push(b*a);
                }
                else
                {
                    num.push(b/a);
                }
                
            }
            
        }
        else
        {
            char oper;
            cin >> oper;
            if(oper == '=') break;
            op.push(oper);
        }

        cnt++;
        
    }

    cout << num.top();
}
