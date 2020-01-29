#include<iostream>
#include<cstdio>
#include<map>
#include<string>

using namespace std;

map<string,string>m_map;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, m;

    cin >>n >> m;

    for(int i = 1; i<=n; i++)
    {
        string str;
        cin >> str;
        string temp = to_string(i);
        m_map[str] = temp;
        m_map[temp] = str;

    }
    for(int i = 0; i<m; i++)
    {
        string temp;
        cin >> temp;
        cout << m_map[temp] << "\n";
        
    }
    

}
