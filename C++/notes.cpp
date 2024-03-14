#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int qty =0;
    switch(100) {
        case 100: qty = n/100;
                n -= qty*100;
                cout << 100 <<" notes: " << qty << endl;
        case 50: qty = n/50;
                n -= qty*50;
                cout << 50 << " notes: " << qty << endl;
        case 20: qty = n/20;
                n -= qty*20;
                cout << 20 << " notes: " << qty << endl;
        case 10: qty = n/10;
                n -= qty*10;
                cout << 10 << " notes: " << qty << endl;
        case 1: qty = n/1;
                n -= qty*1;
                cout << 1 << " notes: " << qty;
    }
    return 0;
}