#include<iostream>
#include<string>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for(int i = 1; i<=n; i++)
    {
        string temp;
        cin >>temp;
        for(int j =0; j<temp.size(); j++)
        {
            temp[j]++;
            if(temp[j] > 'Z')
            {
                temp[j] = 'A';
            }
        }
        cout << "String #" << i <<"\n";
        if(i < n)
        {
            cout << temp << "\n";
            cout << "\n";
        }
        else
        {
            cout << temp;
        }
        
    }
}
