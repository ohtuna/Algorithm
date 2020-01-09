#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    vector<int>a;

    
    string temp;
    for(int i =0; i<s.size(); i++)
    {
        if(s[i] == ',')
        {
            a.push_back(stoi(temp));
            temp ="";
        }
        else
        {
            temp+=s[i];
        }
    }
    a.push_back(stoi(temp));


    int cnt = 0;
    while(cnt < k)
    {
        vector<int>b(a.size()-1);
        for(int i =0 ; i<b.size(); i++)
        {
            b[i] = a[i+1]-a[i]; 
        }
        a = b;
        cnt++;
    }

    for(int i = 0; i<a.size()-1; i++)
    {
        cout << a[i] << ",";
    }
    cout << a[a.size()-1];
}
