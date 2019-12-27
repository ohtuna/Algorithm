#include<iostream>
#include<vector>
#include<string>
#include<memory.h>
#include<set>
#include<map>

using namespace std;

int tc;
int n;
int cnt = 0;




int main()
{
    cin >> tc;

    for(int t = 0; t<tc; t++)
    {
        map<string, int>check;
        vector<int>sum;
        cin >> n;
        for(int i =0; i<n; i++)
        {
            string a,b;
            cin >> a >> b;
            check[b]++;
        }

        map<string, int>::iterator it = check.begin();

        while(it!=check.end())
        {
            sum.push_back(it->second);
            it++;
        }

        int result = 0;
        int add = 1;
        for(int i = 0; i<sum.size(); i++)
        {
            add*=sum[i]+1;   
        }
        cout << add -1<< "\n";

        
        
    }



}
