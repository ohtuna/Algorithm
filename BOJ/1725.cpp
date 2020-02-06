#include<iostream>
#include<stack>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    vector<int>histo(n);
    for(int i =0; i<n; i++)
    {
        cin >> histo[i];
    }
    histo.push_back(0);

    stack<int>st;
    int ans = 0;

    for(int i =0; i<histo.size(); i++)
    {
        while(!st.empty() && histo[st.top()] >= histo[i])
        {
            int j = st.top();
            st.pop();

            int width = -1;

            if(st.empty())
            {
                width = i;
            }
            else
            {
                width = (i-st.top() - 1);
            }
            ans = max(ans, histo[j] * width);
        }
        st.push(i);
    }

    cout << ans;

}
