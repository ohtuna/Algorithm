#include<iostream>
#include<string>

using namespace std;

int main()
{
    int c;
    cin >> c;

    for(int i =0; i<c; i++)
    {
        string s;
        cin >> s;
        int n, t, l;
        cin >> n >> t >> l;

        int TLE = 100000000 * l;

        if(s == "O(N)")
        {
            cout << "May Pass." << "\n";
        }
        else if(s == "O(N^2)")
        {
            if(n >= 100000)
            {
                cout << "TLE!" << "\n";
            }
            else
            {
                int cnt = t;
                while(cnt > 0)
                {
                    if(TLE < 0)break;
                    TLE -= (n*n);
                    cnt--;
                }
                if(TLE < 0)
                {
                    cout << "TLE!" << "\n";
                }
                else
                {
                    cout << "May Pass." << "\n";
                }
            }
        }
        else if(s == "O(N^3)")
        {
            if(n > 1000)
            {
                cout << "TLE!" << "\n";
            }
            else
            {
                int cnt = t;
                while(cnt > 0)
                {
                    if(TLE < 0)break;
                    TLE -= (n*n*n);
                    cnt--;
                }
                if(TLE < 0)
                {
                    cout << "TLE!" << "\n";
                }
                else
                {
                    cout << "May Pass." << "\n";
                }
            }   
        }
        else if(s == "O(2^N)")
        {
            if(n >= 30)
            {
                cout << "TLE!" << "\n";
            }
            else
            {
                int cnt = t;
                int pow = 1;
                for(int i = 1; i<=n; i++)
                {
                    pow*=2;
                }
                while(cnt > 0)
                {
                    if(TLE < 0)break;
                    TLE -= (pow);
                    cnt--;
                }
                if(TLE < 0)
                {
                    cout << "TLE!" << "\n";
                }
                else
                {
                    cout << "May Pass." << "\n";
                }
            }
            
        }
        else
        {
            if(n>=13)
            {
                cout << "TLE!" << "\n";
            }
            else
            {
                int cnt = t;
                int fac = 1;
                for(int i = n; i>=1; i--)
                {
                    fac *=i;
                }
                while(cnt > 0)
                {
                    if(TLE < 0)break;
                    TLE -= (fac);
                    cnt--;
                }
                if(TLE < 0)
                {
                    cout << "TLE!" << "\n";
                }
                else
                {
                    cout << "May Pass." << "\n";
                }
            }
            
        }
        
    }
}
