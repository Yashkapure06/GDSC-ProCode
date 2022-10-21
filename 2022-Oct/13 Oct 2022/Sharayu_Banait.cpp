#include <bits/stdc++.h>
using namespace std;

void find_common_element(set<string> &list1, set<string> &list2)
{
    map<string, int> mp;

    for (auto elem : list1)
    {
        if (mp.find(elem) != mp.end())
            mp[elem]++;
        else
            mp.insert({elem, 1});
    }

    for (auto elem : list2)
    {
        if (mp.find(elem) != mp.end())
            mp[elem]++;
        else
            mp.insert({elem, 1});
    }

    cout << "";
    for (auto itr = mp.begin(); itr != mp.end(); itr++)
    {
        if (itr->second == 2)
            cout << itr->first << " ";
    }
}

int main()
{
    string str1, str2;

    cout <<"";
    getline(cin, str1);
    istringstream is1(str1);
    set<string> list1((istream_iterator<string>(is1)), istream_iterator<string>());

    cout <<"";
    getline(cin, str2);
    istringstream is2(str2);
    set<string> list2((istream_iterator<string>(is2)), istream_iterator<string>());

    find_common_element(list1, list2);
    return 0;
}
