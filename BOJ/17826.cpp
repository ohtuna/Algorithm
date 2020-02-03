#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int s[301];
int main()
{
    for(int i =0; i<50; i++)
    {
        int score;
        cin >> score;
        s[score]++;
    }
    int hong;
    cin >> hong;

    int total =0;
    for(int i = 300; i>=hong; i--)
    {
        total += s[i];
    }

    if(total <6)
    {
        cout << "A+";
    }
    else if(total < 16)
    {
        cout << "A0";
    }
    else if(total <31)
    {
        cout << "B+";
    }
    else if(total<36)
    {
        cout << "B0";
    }
    else if(total <46)
    {
        cout << "C+";
    }
    else if(total <49)
    {
        cout << "C0";
    }
    else
    {
        cout << "F";
    }
}
