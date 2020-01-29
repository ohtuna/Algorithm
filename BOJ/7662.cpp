#include<iostream>
#include<algorithm>
#include<set>
#include<map>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;

    while(T--)
    {
        multiset<int>check;
        multiset<int>::iterator it;
        int n;
        cin >> n;

        for(int i =0; i<n; i++)
        {
            char cmd;
            int num;
            cin >> cmd >> num;

            if(cmd == 'I')
            {
                check.insert(num);
            }
            else if(cmd == 'D')
            {
                if(check.empty())continue;
                if(num == 1)
                {
                    it = check.end();
                    it--;
                    check.erase(it);   
                }
                else if(num == -1)
                {
                    it = check.begin();
                    check.erase(it);
                }
            }
        }

        if(check.empty())
        {
            cout << "EMPTY" << "\n";
        }
        else
        {
          
            it = check.end();
            it--;
            cout << *it <<" ";
            it = check.begin();
            cout << *it << "\n";
        }
        

    }
}
