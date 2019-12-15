    #include<iostream>
    #include<memory.h>

    using namespace std;

    long long cache[1001][1001];

    int main()
    {   
        int n, r;
        cin >> n >> r;

        int check = 1;
        for(int i =1; i<=30; i++)
        {
            cache[i][1] = 1;
        }
        for(int i =1; i<=30; i++)
        {
            cache[i][check] = 1;
            check++;
        }
        check = 1;
        for(int  i = 1; i<=n; i++)
        {
            
            for(int j=1; j<=check; j++)
            {
                if(cache[i][j] == 0)
                {
                    cache[i][j] = cache[i-1][j-1] + cache[i-1][j]; 
                }
            }
            check++;
        }

        cout << cache[n][r];
    }
