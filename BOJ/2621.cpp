#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
    vector<pair<int, char>>card;

    for(int i = 0; i<5; i++)
    {
        char color;
        int n;
        cin >> color >> n;
        card.push_back({n, color});
    }
    sort(card.begin(), card.end());

    //900점 케이스
    int color_cnt[4] = {0,};

    for(int i =0; i<5; i++)
    {
        if(card[i].second == 'R')
        {
            color_cnt[0]++;
        }
        if(card[i].second =='B')
        {
            color_cnt[1]++;
        }
        if(card[i].second == 'Y')
        {
            color_cnt[2]++;
        }
        if(card[i].second == 'G')
        {
            color_cnt[3]++;
        }
    }
    //900점
    if(color_cnt[0] == 5 || color_cnt[1] == 5 || color_cnt[2] == 5 || color_cnt[3] == 5)
    {
        int cnt = 0;
        for(int i =1; i<5; i++)
        {
            if(card[i].first == card[i-1].first+1) cnt++;
        }
        if(cnt == 4)
        {
            cout << 900 + card[4].first;
            return 0;
        }
        else
        {
            //600점 케이스
            cout << 600 + card[4].first;
            return 0;
        } 
    }


    //800점 케이스
    int max_num_cnt = 0;
    int min_num_cnt = 0;
    for(int i = 0; i<5; i++)
    {
        if(card[0].first == card[i].first) min_num_cnt++;
        if(card[4].first == card[i].first) max_num_cnt++;
    }
    if((max_num_cnt == 4 && min_num_cnt == 1) || (max_num_cnt == 1 && min_num_cnt == 4))
    {
        if(max_num_cnt == 4)
        {
            cout << 800 + card[4].first;
            return 0;
        }
        if(min_num_cnt == 4)
        {
            cout << 800 + card[0].first;
            return 0;
        }
    }
    if((max_num_cnt == 3 && min_num_cnt == 2) || (max_num_cnt == 2 && min_num_cnt == 3))
    {
        if(max_num_cnt == 3)
        {
            cout << 700 + (10*card[4].first) + card[0].first;
            return 0;
        }
        else
        {
            cout << 700 + (10*card[0].first) + card[4].first;
            return 0;
        }
    }

    int cnt = 0;
    for(int i =1; i<5; i++)
    {
        if(card[i].first == card[i-1].first+1) cnt++;
    }
    if(cnt == 4)
    {
        cout << 500 + card[4].first;
        return 0;
    }

    int arr[10] = {0,};
    for(int i = 0; i<5; i++)
    {
        arr[card[i].first]++;
    }

    cnt = 0;
    int a = 0;
    int b = 0;
    for(int i = 1; i<=9; i++)
    {
        if(arr[i] == 3)
        {
            cout << 400 + i;
            return 0;
        }
        if(arr[i] == 2)
        {
            cnt++;
            if(cnt == 1)
            {
                a = i;
            }
            if(cnt == 2)
            {
                b = i;
            }

        }
    }
    if(cnt == 2)
    {
        cout << 300 + (max(a, b) * 10) + min(a,b);
        return 0;
    }
    if(cnt == 1)
    {
        cout << 200 + a;
        return 0;
    }

    cout << 100 + card[4].first;







}
