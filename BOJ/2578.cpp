#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int map[7][7];


void EraseNum(int num)
{
    for(int y =0; y<5; y++)
    {
        for(int x= 0; x<5; x++)
        {
            if(map[y][x] == num)
            {
                map[y][x] = -1;
                return;
            }
        }
    }
}

int Check()
{
    int cnt = 0;
    bool check = true;
    //가로체크
    for(int y =0; y<5; y++)
    {
        check = true;
        for(int x = 0; x<5; x++)
        {
            if(map[y][x] != -1)
            {
                check = false;
                break;
            }
        }
        if(check == true) cnt++;
    }
    //세로 체크
    for(int x =0; x<5; x++)
    {
        check = true;
        for(int y = 0; y<5; y++)
        {
            if(map[y][x] != -1)
            {
                check = false;
                break;
            }
        }
        if(check == true) cnt++;
    }
    //대각선 체크
    
    check = true;
    for(int y = 0; y<5; y++)
    {
        if(map[y][y] != -1)
        {
            check = false;
            break;
        }
    }
    if(check == true)
    {
        cnt++;
    }

    check = true;
    for(int x = 4; x>=0; x--)
    {
        if(map[4-x][x] != -1)
        {
            check = false;
            break;
        }
    }
    if(check ==  true)
    {
        cnt++;
    }


    return cnt;
}

int main()
{
    for(int y=0; y<5; y++)
    {
        for(int x=0;x<5; x++)
        {
            cin >> map[y][x];
        }
    }

    int ans = 0;
    for(int y = 0; y<5; y++)
    {
        for(int x= 0; x<5; x++)
        {
            int num;
            cin >> num;
            //숫자 지우기 구현
            EraseNum(num);
            ans++;
            //빙고 체크
            int t = Check();
            if(t >= 3)
            {
                cout << ans;
                return 0;
            }

        }
    }

}
