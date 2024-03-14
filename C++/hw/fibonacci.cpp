#include <bits/stdc++.h>
using namespace std;
int fibonacci(int n) {
    int a=0,b=1;int c = 0;
    for(int i=1;i<n-1;i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return c;
}
int main() {
    int n;
    cin >> n;
    int ans = fibonacci(n);
    cout << n << "th fibonacci no. is " << ans;
    return 0;
}