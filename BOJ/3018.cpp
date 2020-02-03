#include<iostream>
#include<algorithm>
#include<vector>
#include<set>

using namespace std;

int n;
int e;
int arr[101][101];
//선영이 (1) 이 나오면 새로운 노래를 배운다
//만약 없으면 배운 노래들을 공유 한다.

int main()
{
    cin >> n >> e;

    int newsong = 0;
    for(int i = 0; i<e; i++)
    {
        int k;
        cin >> k;
        vector<int>a;
        for(int j =0; j<k; j++)
        {
            int temp;
            cin >> temp;
            a.push_back(temp);
        }
        sort(a.begin(), a.end());
        if(a[0] == 1)
        {
            //현재 배울 노래 번호
            for(int j =0; j<a.size(); j++)
            {
                arr[a[j]][newsong] = 1;
            }
            newsong++;
        }
        else
        {
            set<int>learnsong;
            for(int j =0; j<a.size(); j++)
            {
                for(int l =0; l<newsong; l++)
                {
                    if(arr[a[j]][l] == 1)
                    {
                        learnsong.insert(l);
                    }
                }
            }
            for(int j =0; j<a.size(); j++)
            {
                for(auto l : learnsong)
                {
                    arr[a[j]][l] = 1;
                }
            }
        }
    }
    vector<int>ans;
    for(int i = 1; i<=n; i++)
    {
        int cnt = 0;
        for(int j = 0; j<newsong; j++)
        {
            if(arr[i][j] == 1) cnt++;
        }
        if(cnt == newsong) ans.push_back(i);
    }

    for(int i =0; i<ans.size(); i++)
    {
        cout << ans[i] << "\n";
    }

}
