#include<bits/stdc++.h>
using namespace std;
int main() {
    pair<int,char> ic[] = {{2,'a'},{3,'b'}};
    cout << ic[1].second <<" " << ic[0].first<< endl;
    vector<pair<int,int>> t(3,{0,'a'});
    t[0]=ic[0];
    t[1]=ic[1];
    t.emplace_back(3,'r');
    t.push_back({5,'p'});
    for(const auto& it:t){
        cout << it.first <<" "<< (char)it.second << endl;
    }
    
    return 0;
}