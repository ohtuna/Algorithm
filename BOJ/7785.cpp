#include<iostream>
#include<string>
#include<algorithm>
#include<queue>
#include<vector>
#include<set>


using namespace std;


bool ccmp(string &a, string &b)
{
    return lexicographical_compare(a.begin(), a.end(), b.begin(), b.end());
}

int main()
{
    int n;

    cin >> n;

    set<string>visit;

    for(int i = 0; i<n; i++)
    {
        string name;
        string status;

        cin >> name >> status;

        if(status == "enter")
        {
            visit.insert(name);
        }
        else
        {
            visit.erase(name);
        }
    }

    vector<string>ans;
    set<string>::iterator iter;
    iter = visit.begin();
    while(iter != visit.end())
    {
        ans.push_back(*iter);
        iter++;
    }

    sort(ans.begin(), ans.end(), ccmp);


    
    for(int i =ans.size()-1; i>=0; i--)
    {
        cout << ans[i] << "\n";
    }

}
