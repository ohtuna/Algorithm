#include<iostream>
#include<algorithm>
#include<vector>
#include<cstdio>

using namespace std;

int tree[100001];

int gcd(int a, int b)
{
    if(b==0) return a;
    return gcd(b, a%b);
}
int main()
{
    int n;
    scanf("%d", &n);

    for(int i =0; i<n; i++)
    {
        scanf("%d", &tree[i]);
    }

    sort(tree, tree + n);

    //최소 d를 구하고 d의 약수를 구해서 판별하면 될듯
    vector<int>minDist;
    for(int i =n-1; i>0; i--)
    {
        minDist.push_back(tree[i] - tree[i-1]);
    }
    sort(minDist.begin(), minDist.end());

    int temp = gcd(minDist[0], minDist[1]);
    for(int i =2; i<minDist.size(); i++)
    {
        temp = gcd(temp, minDist[i]);
    }

   
    int ans = 0;
    int start = tree[0];
    for(int i = 1; i<n; i++)
    {
        if(tree[i] == start + temp)
        {
            start+= temp;
            continue;
        }
        else
        {
            
            for(;;)
            {
                if(tree[i] > start+temp)
                {
                 ans++;
                 start+=temp;
                }
                else
                {
                    start+=temp;
                    break;
                }
            }
        }
        
    }

    cout << ans;
}
