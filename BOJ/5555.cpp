#include<iostream>
#include<string>

using namespace std;

int main()
{
    string ring;
    cin >> ring;

    int n;

    cin >> n;

    int ans = 0;
    for(int i =0; i<n; i++)
    {
        string search;
        cin >> search;
        for(int j =0; j<search.size(); j++)
        {
            if(search[j] == ring[0])
            {
                bool find = true;
                int ring_start = 0;
                int search_start = j;
                while(ring_start < ring.size()-1)
                {
                    ring_start++;
                    search_start++;
                    if(search_start == search.size())
                    {
                        search_start = 0;
                    }
                    if(ring[ring_start] == search[search_start]) continue;
                    else
                    {
                        find = false;
                        break; 
                    }
                }
                if(find == true)
                {
                    ans++;
                    break;
                }
            }
        }
    }

    cout << ans;
}
