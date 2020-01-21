#include<iostream>
#include<set>
#include<tuple>
#include<algorithm>

using namespace std;


int main()
{
    int n;
    cin >> n;
    set<tuple<int,int,int>>check;
    //택희는 짝수개만 받을수 있다.
    //사탕이 0개 받는 사람 없어야한다.
    //남규는 영훈이보다 2개 많아야한다
    //남는 사탕 없어야 한다.

    int ans = 0;
    for(int a = 1; a<=n; a+=1)
    {
        for(int b = 1; b<=n; b++)
        {
            for(int c = 1; c<=n; c++)
            {
                if(a %2 ==0 && b+2 <=c && a+b+c == n)
                {
                    check.insert({a,b,c});
                }
            }
        }
    }

    cout << check.size();
}
