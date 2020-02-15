#include<iostream>
#include<list>
#include<vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, k;
    cin >> n >> k;

    vector<int>josep;

    for(int i =1; i<=n; i++)
    {
        josep.push_back(i);
    }

    vector<int>ans;

    int cur = 0;
    while(!josep.empty())
    {
        cur+=k;
        cur--;
        cur %= josep.size();
        ans.push_back(josep[cur]);
        josep.erase(josep.begin()+cur);
    }

    cout << "<";
    for(int i =0; i< ans. size()-1; i++)
    {
        cout << ans[i] << ", ";
    }
    cout << ans[ans.size()-1] << ">";
}
