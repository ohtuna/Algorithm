#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

struct Deonjeon
{
    int t;
    int a;
    int h;
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, attack;
    cin >> n >> attack;

    vector<Deonjeon>v;

    for(int i =0 ; i<n ;i++)
    {
        int t, a, h;
        cin >> t >> a >> h;

        v.push_back({t,a,h});
    }

    long long left = 1;
    long long right = 9223372036854775800;

    while(left <= right)
    {
        long long mid = (left+right)/2;
        long long temp_attack = attack;
        long long max_hp = mid;

        for(int i =0; i<n; i++)
        {
            if(v[i].t == 1)
            {
                if(v[i].h % temp_attack == 0)
                {
                    max_hp -= (v[i].h / temp_attack-1) * v[i].a; 
                }
                else
                {
                    max_hp -= (v[i].h / temp_attack) * v[i].a;
                }   
            }
            else
            {
                temp_attack += v[i].a;
                if(max_hp + v[i].h < mid)
                {
                    max_hp += v[i].h;
                }
                else
                {
                    max_hp = mid;
                }   
            }
            if(max_hp<1)break;
        }

        if(max_hp <= 0)
        {
            left = mid+1;
        }
        else
        {
            right = mid-1;
        }
    }

    cout << left;




}
