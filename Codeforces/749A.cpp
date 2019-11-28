#include<iostream>
#include<vector>

using namespace std;

bool isPrime[100005];
vector<int>primelist;
vector<int>p;
int n;
bool flag = false;

void Era(int nn)
{
    for(int i = 2; i*i<= nn; i++)
    {
        if(isPrime[i])continue;
        for(int j = i+i; j<=100000; j+=i)
        {
            isPrime[j] = true;
        }
    }
}

void go(int sum)
{
    if(flag == true) return;
    if(sum > n) return;
    if(sum == n)
    {
        flag = true;
        return;
    }

    for(int i =0; i<primelist.size(); i++)
    {
        p.push_back(primelist[i]);
        go(sum + primelist[i]);
        if(flag == true) return;
        p.pop_back();
    }


}



int main()
{
    

    cin >> n;

    Era(n);
    for(int i =2; i<=100000; i++)
    {
        if(!isPrime[i]) primelist.push_back(i);
    }

    go(0);

    
    cout << p.size() << "\n";   
    for(int i =0; i<p.size(); i++)
    {
        cout << p[i] << " ";
    }
}
