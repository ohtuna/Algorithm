#include<iostream>
#include<string>
#include<map>
#include<algorithm>

using namespace std;

map<int, string>m_map;

string fibo(string a, string b)
{
    int n = a.size();
    int m = b.size();
    string ans;

    if(n < m)
    {
        int pos = m -1;
        int carry = 0;
        for(int i = n-1; i>=0; i--)
        {
            int a_num = a[i] - '0';
            int b_num = b[pos] - '0';
            int ab_sum = a_num + b_num;
            if(carry > 0)
            {
                ab_sum+=carry;
                carry = 0;
            }
            if(ab_sum >= 10)
            {
                carry = ab_sum / 10;
                ans.push_back((ab_sum % 10)+'0');
            }
            else
            {
                ans.push_back(ab_sum + '0');
            }
            
            pos--;
        }
        for(int i = pos; i>=0; i--)
        {
            int b_num = b[i] - '0';
            if(carry > 0)
            {
                b_num+=carry;
                carry = 0;
            }
            if(b_num >= 10)
            {
                carry = b_num / 10;
                ans.push_back((b_num % 10) + '0');
            }
            else
            {
                ans.push_back(b_num + '0');
            }
        }
        if(carry > 0)
        {
            ans.push_back(carry + '0');
        }

    }
    else if(n == m)
    {
        int carry = 0;
        for(int i = n-1; i>=0; i--)
        {
            int a_num = a[i] - '0';
            int b_num = b[i] - '0';
            int ab_sum = a_num + b_num;
            if(carry > 0)
            {
                ab_sum+=carry;
                carry = 0;
            }
            if(ab_sum >= 10)
            {
                carry = ab_sum / 10;
                ans.push_back((ab_sum % 10)+'0');
            }
            else
            {
                ans.push_back(ab_sum + '0');
            }
        }
        if(carry > 0)
        {
            ans.push_back(carry + '0');
        }

    }
    else
    {
        int pos = n - 1;
        int carry = 0;
        for(int i = m-1; i>=0; i--)
        {
            int a_num = a[pos] - '0';
            int b_num = b[i] - '0';
            int ab_sum = a_num + b_num;
            if(carry > 0)
            {
                ab_sum+=carry;
                carry = 0;
            }
            if(ab_sum >= 10)
            {
                carry = ab_sum / 10;
                ans.push_back((ab_sum % 10)+'0');
            }
            else
            {
                ans.push_back(ab_sum + '0');
            }
            pos--;
        }

        for(int i = pos; i>=0; i--)
        {
            int a_num = a[i] - '0';
            if(carry > 0)
            {
                a_num+=carry;
                carry = 0;
            }
            if(a_num >= 10)
            {
                carry = a_num / 10;
                ans.push_back((a_num % 10) + '0');
            }
            else
            {
                ans.push_back(a_num + '0');
            }
        }

        if(carry > 0)
        {
            ans.push_back(carry + '0');
        }
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main()
{
    int n;
    cin >> n;

    m_map[0] = "0";
    m_map[1] = "1";
    m_map[2] = "1";
    m_map[3] = "2";
    m_map[4] = "3";

    for(int i =2; i<=10000; i++)
    {
        m_map[i] = fibo(m_map[i-2], m_map[i-1]);
    }

    cout << m_map[n];
}
