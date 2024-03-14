#include<bits/stdc++.h>
using namespace std;
int findDuplicate(vector<int> &arr) 
{
    int len = arr.size();
    map<int,int> mp;
    for(int i=0; i<len; i++) {
        mp[arr[i]]++;
        if(mp[arr.at(i)] == 2) {
            return arr[i];
        }
    }
    
	
}
int main() {
    int n;
    cin >> n;
    vector<int> a;
    for(int i=0; i<n; i++) {
        cin >> a.emplace_back(i);
    }
    int k = findDuplicate(a);
    cout << " " << k;
    return 0;
}