#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, m;

    cin >> n >> m;

    vector<long long>card_list(n);

    for(int i =0;i<n; i++)
    {
        cin >> card_list[i];
    }


    for(int i =0; i<m; i++)
    {
        sort(card_list.begin(), card_list.end());
        long long temp = card_list[0] + card_list[1];

        card_list[0] = temp;
        card_list[1] = temp;
        
    }

    long long ans = 0;
    for(int i = 0; i<card_list.size(); i++)
    {
        ans += card_list[i];
    }
    cout << ans;
}
