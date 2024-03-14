#include<bits/stdc++.h>
using namespace std;
int setbit(int n) {
    int count = 0;
    while(n!=0) {
        if(n & 1) count++;
        n >>= 1;
    }
    return count;
}
int main() {
    int a,b;
    cin >> a >> b;
    int ans = setbit(a) + setbit(b);
    cout << ans;
    return 0;
}