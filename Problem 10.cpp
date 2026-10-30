#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    string s = "codeforces";

    for(int i = 0; i < t; i++)
    {
        char c;
        cin >> c;

        int found = 0;

        for(int j = 0; j < s.length(); j++)
        {
            if(c == s[j])
            {
                found = 1;
                break;
            }
        }

        if(found == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
