#include<iostream>

using namespace std;

bool c[1000001];
int p[1000001];
int cnt = 0;

int main()
{
    c[0] = true;
    c[1] = true;
    for(int i = 2; i<=1000000; i++)
    {
        if(c[i] == false)
        {
            p[cnt++] = i;
            for(int j = i+i; j<=1000000; j+=i)
            {
                c[j]= true;
            }
        }
    }



    while(1)
    {
        int n;
        cin >> n;
        if(n==0)break;
        int cnt = 0;
        for(int i =n+1; i<=2*n; i++)
        {
            if(c[i] == false) cnt++;
        }

        cout << cnt << "\n";
    }
}
