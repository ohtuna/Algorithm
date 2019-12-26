    #include<iostream>
    #include<string>

    using namespace std;

    int n;

    int cnt;
    string temp;
    string ans;
    int visit[10];

    bool Check(string temp)
    {
        bool flag = true;
        char a = temp[0];
        for(int i =1; i<temp.size(); i++)
        {
            char b = temp[i];
            if(b < a)
            {
                a = b;
                continue;
            }
            else
            {
                flag= false;
                break;
            }
            
        }
        return flag;
    }

    void dfs(int depth)
    {
        if(cnt > n) return;
        if(depth == 0)
        {
            if(!temp.empty() && Check(temp))
            {
                cnt++;
                if(cnt == n)
                {
                    ans = temp; 
                }
            }
            return;
        }


        for(int i =0; i<=9; i++)
        {
            if(visit[i] == 1)continue;
            temp.push_back(i+'0');
            visit[i] = 1;
            dfs(depth-1);
            temp.pop_back();
            visit[i] = 0;
        }
    }

    int main()
    {
        cin >> n;


        for(int i = 1; i<=10; i++)
        {
            dfs(i);
        }
        if(ans == "")
        {
            cout << -1;
        }
        else
        {
            cout << ans;
        }
        
        
    }
