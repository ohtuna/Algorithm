#include<iostream>
#include<stack>
#include<algorithm>
#include<vector>
#include<string>
#include<math.h>

using namespace std;

const long long INF = 2000000000;
const long long MAX = 1000000000;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);


    vector<pair<string,long long>>cmd;
    vector<long long>res;
    bool terminate = false;
    while(1)
    {
        string str;
        cin >> str;
        if(str == "QUIT")break;

        if(str == "NUM")
        {
            long long x;
            cin >> x;
            cmd.push_back({str, x});
        }
        else if(str != "END")
        {
            cmd.push_back({str, 0});
        }
        else
        {
            int n;
            cin >> n;
            for(int i =0; i<n; i++)
            {   
                bool f = true;
                stack<long long>st;
                int start;
                cin >> start;
                if(start <=MAX)
                {
                    st.push(start);
                }
                else
                {
                    f= false;
                    res.push_back(INF);
                    continue;
                }
                
                for(int j = 0; j<cmd.size(); j++)
                {
                    if(cmd[j].first == "NUM")
                    {
                        if(cmd[j].second<=MAX)
                        {
                            st.push(cmd[j].second);
                        }
                        else
                        {
                            f= false;
                            res.push_back(INF);
                            break;
                        }
                        
                    }
                    else if(cmd[j].first == "POP")
                    {
                        if(st.empty())
                        {
                            f= false;
                            res.push_back(INF);
                            break;
                        }
                        else
                        {
                            st.pop();
                        }
                    }
                    else if(cmd[j].first == "INV")
                    {
                        if(st.empty())
                        {
                            f= false;
                            res.push_back(INF);
                            break;
                        }
                        long long num = st.top();
                        st.pop();
                        if(abs(num) <= MAX)
                        {
                            st.push(-num);
                        }
                        else
                        {
                            f= false;
                            res.push_back(INF);
                            break;
                        }
                    }
                    else if(cmd[j].first == "DUP")
                    {
                        if(st.empty())
                        {
                            f= false;
                            res.push_back(INF);
                            break;
                        }
                        st.push(st.top());
                    }
                    else if(cmd[j].first == "SWP")
                    {
                        if(st.size() <= 1)
                        {
                            f= false;
                            res.push_back(INF);
                            break;
                        }
                        long long num1 = st.top();
                        st.pop();
                        long long num2 = st.top();
                        st.pop();
                        st.push(num1);
                        st.push(num2);
                    }
                    else if(cmd[j].first == "ADD")
                    {
                        if(st.size() <=1)
                        {
                            f= false;
                            res.push_back(INF);
                            break;
                        }
                        long long num1 = st.top();
                        st.pop();
                        long long num2 = st.top();
                        st.pop();
                        if(abs(num1 + num2) <= MAX)
                        {
                            st.push(num1+num2);
                        }
                        else
                        {
                            f= false;
                            res.push_back(INF);
                            break;
                        }
                    }
                    else if(cmd[j].first == "SUB")
                    {
                        if(st.size() <= 1)
                        {
                            f= false;
                            res.push_back(INF);
                            break;
                        }
                        long long num1 = st.top();
                        st.pop();
                        long long num2 = st.top();
                        st.pop();
                        if(abs(num2 - num1) <= MAX)
                        {
                            st.push(num2-num1);
                        }
                        else
                        {
                            f= false;
                            res.push_back(INF);
                            break;
                        }
                    }
                    else if(cmd[j].first == "MUL")
                    {
                        if(st.size() <=1)
                        {
                            f= false;
                            res.push_back(INF);
                            break;
                        }
                        //마이너스도 고려해야함
                        string num1 = to_string(st.top());
                        long long num1_i = st.top();
                        st.pop();
                        string num2 = to_string(st.top());
                        long long num2_i = st.top();
                        st.pop();
                        int num1_sz = 0;
                        int num2_sz = 0;
                        if(num1_i < 0)
                        {
                            num1_sz = num1.size() -1;
                        }
                        else
                        {
                            num1_sz = num1.size();
                        }
                        if(num2_i < 0)
                        {
                            num2_sz = num2.size()-1;
                        }
                        else
                        {
                            num2_sz = num2.size();
                        }
                        
                           
                        int len = num1_sz - (num2_sz - 1);

                        if(len > 10)
                        {
                            f= false;
                            res.push_back(INF);
                            break;
                        }
                        else
                        {
                            if(abs(num1_i * num2_i) <= MAX )
                            {
                                st.push(num1_i * num2_i);
                            }
                        }
                    }
                    else if(cmd[j].first == "DIV")
                    {
                        if(st.size() <=1)
                        {
                            f= false;
                            res.push_back(INF);
                            break;
                        }
                        long long num1 = st.top();
                        st.pop();
                        long long num2 = st.top();
                        st.pop();
                        if(num1 == 0)
                        {
                            f= false;
                            res.push_back(INF);
                            break;
                        }
                        if((num2 < 0 && num1 <0) || (num2> 0 && num1 > 0))
                        {
                            st.push((abs(num2)/abs(num1)));
                        }
                        else
                        {
                            st.push(-(abs(num2)/abs(num1)));
                        }
                    }
                    else if(cmd[j].first == "MOD")
                    {
                        if(st.size() <=1)
                        {
                            f= false;
                            res.push_back(INF);
                            break;
                        }
                        long long num1 = st.top();
                        st.pop();
                        long long num2 = st.top();
                        st.pop();
                        if(num1 ==0)
                        {
                            f= false;
                            res.push_back(INF);
                            break;
                        }
                        if(num2 < 0)
                        {
                            st.push(-(abs(num2)%abs(num1)));
                        }
                        else
                        {
                            st.push((abs(num2)%abs(num1)));
                        }
                        
                    }
                }
                if(f == false) continue;
                if(f == true)
                {
                    if(st.size() == 1)
                    {
                        res.push_back(st.top());
                    }
                    else
                    {
                        res.push_back(INF);
                    }
                    
                }

            }

           
            for(int i = 0; i<res.size(); i++)
            {
                if(res[i] == INF)
                {
                    cout << "ERROR" << "\n";
                }
                else
                {
                    cout << res[i] << "\n";
                }
            }

            cout << "\n";
            res.clear();
            cmd.clear();
            
            
        }
        
    }
}
