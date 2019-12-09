#include<iostream>
#include<string>

using namespace std;

string reverse_it(string::iterator &it)
{
    char head = (*it);
    ++it;

    if(head == 'w' || head == 'b') return string(1, head);

    string upperLeft = reverse_it(it);
    string upperRight = reverse_it(it);
    string lowerLeft = reverse_it(it);
    string lowerRight = reverse_it(it);

    return string("x") + lowerLeft + lowerRight + upperLeft + upperRight;
}

int main()
{
    int n;

    cin >> n;

    for(int i =0; i<n; i++)
    {
        string s;
        cin >> s;

        string::iterator it = s.begin();
        string ans = reverse_it(it);

        cout << ans << "\n";
    }




}
