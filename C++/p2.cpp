#include <bits/stdc++.h>
using namespace std;
bool comp(pair<int,int> p1,pair<int,int>p2) {
    if(p1.second < p2.second) return true;
    if(p1.second > p2.second) return false;
    //if same
    if(p1.first>p2.first) return 1;
    else return 0;
}
int main() {
    pair<int,int> a[] = {{1,2},{2,1},{4,1}};
    sort(a,a+3, comp);
    for(auto i:a) {
        cout << i.first << " " << i.second << endl;
    }
    return 0;
}