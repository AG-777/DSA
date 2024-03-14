#include<bits/stdc++.h>
using namespace std;
int fact(int k) {
    int f=1;
    while(k!=0) {
        f *= k;
        k--;
    } 
    return f;
}
int nCr(int n,int r) {
    return fact(n)/(fact(r)*fact(n-r));
}
int main() {
    int n,r;
    cin >> n >> r;
    int ans = nCr(n,r);
    cout << n << "C" << r << " = " << ans;
    return 0;
}