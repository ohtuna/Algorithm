    #include<iostream>
    #include<string>

    using namespace std;

    int main()
    {
        string s;
        cin >> s;

        int a, b;

        if(s.size() <= 2)
        {
            a = s[0] - '0';
            b = s[1] - '0';
        }
        else if(s.size() == 3)
        {
            if(s[1] == '0')
            {
                a = 10;
                b = s[2] - '0';
            }
            else
            {
                a = s[0] -'0';
                b = 10;
            }
        }
        else
        {
            a = 10;
            b = 10;
        }
        cout << a+b;
}

