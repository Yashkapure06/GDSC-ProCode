#include <bits/stdc++.h>
using namespace std;

int main()
{
    string l1, l2;
    getline(cin, l1);
    istringstream is(l1);
    vector<string> v1((istream_iterator<string>(is)), istream_iterator<string>());

    rotate(v1.begin(), v1.begin() + 1, v1.end());

    for (auto i : v1)
        cout << i << " ";

    return 0;
}