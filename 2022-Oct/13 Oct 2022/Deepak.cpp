#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int x = v[0];
    for (int i = 0; i < n - 1; i++)
    {
        v[i] = v[i + 1];
    }
    v[n - 1] = x;
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    int test = 1;
    while (test--)
    {
        solve();
    }
    return 0;
}
