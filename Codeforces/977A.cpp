#include<iostream>
#include<string>
 
using namespace std;
 
int main()
{
    string n;
    int k;
    cin >> n >> k;
 
    for(int i =0; i<k; i++)
    {
        int temp = stoi(n);
        if(n[n.size()-1] == '0')
        {
            temp/=10;
            n = to_string(temp);
        }
        else
        {
            temp -=1;
            n = to_string(temp);
        }
        
    }
 
 
    cout << n;
 
}
