#include <bits/stdc++.h>
using namespace std;
int main() {
    map<char,int> a;
    cout << a['a'];
    a['a']++;
    auto it = a.begin();
    cout << a['a'] << " " << it->first;
    return 0;
}   