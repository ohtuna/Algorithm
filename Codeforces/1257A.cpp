#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    int t;
    cin >> t;

    for(int tc = 0; tc<t; tc++)
    {
        int n, x, a, b;
        cin >> n >> x >> a >> b;
        //n총학생수
        //x시간
        //위치 a, b
        int cnt = 0;

        if((a == 1 && b==100) || (a==100 && b ==1))
        {
            cout << 99 << "\n";
            continue;
        }

        if(a > b)
        {
            //a가 비보다 크면
            for(int i = 0; i<x; i++)
            {
                if(a == n)break;
                cnt++;
                a++;
            }
            for(int i =0; i<x-cnt; i++)
            {
                if(b == 1)break;
                b--;
            }
            
        }
        else
        {
            for(int i = 0; i<x; i++)
            {
                if(b == n)break;
                cnt++;
                b++;
                
            }
            for(int i =0; i<x-cnt; i++)
            {
                if(a == 1)break;
                a--;    
            }
        }
        
        cout << abs(a-b) << "\n";

    }
}
