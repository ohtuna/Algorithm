#include<iostream>

using namespace std;

int coin = 0;
bool flag = false;

void go(int n)
{
    if(flag == true) return;
    if(n < 0) return;
    if(n==0)
    {
        flag = true;
        return;
    }

    coin++;
    go(n-5);
    if(flag == true) return;
    coin--;
    coin++;
    go(n-2);
    if(flag == true) return;
    coin--;

}

int main()
{
    int n;
    cin >> n;

    go(n);

    if(flag == false)
    {
        cout << -1;
    }
    else
    {
        cout << coin;
    }
    

}
