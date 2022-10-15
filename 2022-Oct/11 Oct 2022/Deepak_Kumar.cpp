#include <bits/stdc++.h>
#define ll long long
#define f first
#define s second
#define all(c) c.begin(), c.end()
#define FAST ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
using namespace std;

void Result()
{
    string s;
    getline(cin, s);
    cin >> s;
    ll count = 0;
    string ans = "";
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ')
        {
            bool ok = 1;
            for (int j = 0; j < ans.length(); j++)
            {
                if (ans[j] != ans[ans.length() - j - 1])
                {
                    ok = 0;
                }
            }
            if (ok)
            {
                count++;
            }
            ans = "";
        }
        else
        {
            ans += s[i];
        }
    }
    if (ans.length() != 0)
    {
        bool ok = 1;
        for (int j = 0; j < ans.length(); j++)
        {
            if (ans[j] != ans[ans.length() - j - 1])
            {
                ok = 0;
            }
        }
        if (ok)
        {
            count++;
        }
    }
    cout << count << endl;
}

int main()
{
    FAST int test = 1;
    while (test--)
    {
        Result();
    }
    return 0;
}