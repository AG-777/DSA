#include<bits/stdc++.h>
using namespace std;
bool isEven(int n) {
    if(n & 1) return 0;
    return 1;
}
int main() {
    int a;
    cin >> a;
    if(isEven(a)) {
        cout << "Number is Even";
    }
    else {
        cout << "Number is Odd";
    }
    return 0;
}