#include<bits/stdc++.h>
using namespace std;
int findUnique(int arr[],int len) {
    map<int,int> mp;
    for(int i=0; i<len; i++) {
        // increment value of keys which are elements
        mp[arr[i]]++;
    }
    for(int i=0; i<len; i++) {
        if(mp[arr[i]] == 1) return arr[i];
    }
    return 0;
}
int main() {
    int size;
    int arr[100];
    cin >> size;
    for(int i=0; i<size; i++) {
        cin >> arr[i];
    }
    int n = findUnique(arr,size);
    cout << "Unique number is " << n;
    return 0;
}