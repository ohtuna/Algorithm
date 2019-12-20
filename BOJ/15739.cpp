#include<iostream>

using namespace std;

int board[101][101];
int check[10001];

int main()
{
    int n;

    cin >> n;


    int is_sqaure = n*((n*n)+1) /2;

    bool flag = true;

    for(int y =0 ;y<n; y++)
    {
        for(int x =0; x<n; x++)
        {
            cin >> board[y][x];
            if(check[board[y][x]] == 0)
            {
                check[board[y][x]]++;
            }
            else
            {
                flag = false;
            }
            
        }
    }
    if(flag == false)
    {
        cout << "FALSE";
        return 0;
    }


    for(int y = 0; y<n; y++)
    {
        int sum = 0;
        for(int x =0; x<n; x++)
        {
            sum += board[y][x];
        }
        if(sum != is_sqaure)
        {
            flag = false;
            break;
        }
    }

    for(int x = 0; x<n; x++)
    {
        int sum = 0;
        for(int y =0; y<n; y++)
        {
            sum += board[y][x];
        }
        if(sum != is_sqaure)
        {
            flag = false;
            break;
        }
    }

    int sum = 0;
    for(int y = 0; y<n; y++)
    {
        for(int x =0; x<n; x++)
        {
            if(y==x) sum+=board[y][x];
        }

    }
    if(sum != is_sqaure)
    {
        flag = false;
    }

    sum = 0;
    for(int y = 0; y<n; y++)
    {
        for(int x =0; x<n; x++)
        {
            if(y+x+1 == n) sum+=board[y][x];
        }
    }
    if(sum != is_sqaure)
    {
        flag = false;
    }



    if(flag == true)
    {
        cout << "TRUE";
    }
    else
    {
        cout << "FALSE";
    }


}
