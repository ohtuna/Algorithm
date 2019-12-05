#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int n;

    cin >> n;

    vector<long long>b(n);

    for(int i =0; i<n; i++)
    {
        cin >> b[i];
    }

    vector<long long>a(n);

    int div  = 1;
    a[0] = b[0];
    for(int i =1; i<n; i++)
    {
        div++;
        long long sum = 0;
        for(int j=0; j<i; j++)
        {
            sum += a[j];
        }
        a[i] = (b[i]*div) - sum;
    }

    for(int i =0; i<a.size(); i++)
    {
        cout << a[i] << " ";
    }
}
