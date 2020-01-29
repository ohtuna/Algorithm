#include<iostream>
#include<algorithm>
#include<map>
#include<string>

using namespace std;

map<string, string>m_map;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    for(int i = 0; i<n; i++)
    {
        string str;
        string password; 
        cin>> str >> password;
        m_map[str] = password;
    }
    for(int i = 0; i <m; i++)
    {
        string str;
        cin >> str;
        cout << m_map[str] << "\n";
    }
    
}
