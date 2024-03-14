#include<bits/stdc++.h>
#include<math.h>
using namespace std;
void armstrong(int num) {
    int temp,k=num;
    int num1=num;
    int num2=0;
    int digits = 0;
    while(k>0){
        k /= 10;
        digits++;
    }
    while(num>0){
        temp = num%10;
        num2 += pow(temp,digits);
        num /= 10;
    }
    if(num2 == num1) {
        cout << "Armstrong number";
    }
    else {
        cout << "Not an Armstrong number";
    }
}
int main() {
    int n;
    cin >> n;
    armstrong(n);
}