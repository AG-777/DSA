#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b) {
    while(a>0 && b>0){
        if(a>b) {
            a %= b;
        }
        else
        {
            b %= a;
        }
        if (a==0) {
            return b;
        }
        else if(b==0) {
            return a;
        }
    }
}
int main() {
    int n1,n2;
    cin >> n1 >> n2;
    int ans = gcd(n1,n2);
    cout << ans;
    return 0;
}