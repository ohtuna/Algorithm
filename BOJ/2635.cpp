    #include<iostream>
    #include<vector>

    using namespace std;

    int main()
    {
        int n;


        cin >> n;


        int max_size = -1;
        vector<int>ans;
        for(int i = n; i>=n/2; i--)
        {
            //i가 두번째 수.
            vector<int>a;
            a.push_back(n);
            a.push_back(i);
            int first = 0;
            int second = 1;
            while(1)
            {
                if(a[first] - a[second] >= 0)
                {
                    a.push_back(a[first] - a[second]);
                    first++;
                    second++;
                }
                else
                {
                    if(max_size == -1 || max_size < a.size())
                    {
                        max_size = a.size();
                        ans = a;
                    }
                    break;
                }
            }
        }

        cout << ans.size() << "\n";
        for(int i =0; i<ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
    }
