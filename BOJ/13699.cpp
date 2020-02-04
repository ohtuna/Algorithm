#include<iostream>

using namespace std;

long long memo[100];

int main()
{
    int n;
    cin >> n;

    memo[0] = 1;
    memo[1] = 1;


    for(int i = 2; i<=35; i++)
    {
        for(int j = 0; j<=i; j++)
        {
            memo[i] += memo[j] * memo[i-j -1];
        }
        
    }

    cout << memo[n];


}
