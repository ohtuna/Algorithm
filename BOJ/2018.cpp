#include<iostream>

using namespace std;

int main()
{
    int n;
    cin >>n;
    int sum = 0;
    int answer = 0;
    int left = 0;
    int right = 0;

    while(1)
    {

        if(sum + right <= n)
        {
            right++;
            sum += right;
        }
        else
        {
            left++;
            sum-= left;
        }

        if(sum == n) answer++;
        if(right >= (n / 2) + 1)break;
    }

    cout << answer + 1;
}
