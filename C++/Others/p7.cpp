#include<bits/stdc++.h>
using namespace std;
int isPrime(int n) {
    for(int i=2;i<=n/2;i++) {
        if(n%i==0) {
            return 0;
        }
    }
    return 1;
}
void HCPF(int num,int num2) {
    int k=1,HCPF;
    while(k<=num){
        if(isPrime(k)){
                if(num%k==0 && num2%k==0){
                HCPF = k;
            } 
            }
        k++;
    }
    cout << "Highest Common Prime Factor is: " << HCPF << endl;
}
void HCF(int num,int num2) {
    int k=1,HCF;
    int smallest = (num > num2)? num2:num;
    while(k<=smallest){
            if(num%k==0 && num2%k==0){
                HCF = k;
            } 
        k++;
    }
    cout << "Highest Common Factor is: " << HCF << endl;
}

int main() {
    int num,num2;
    cin >> num >> num2;
    HCF(num,num2);
    HCPF(num,num2);
    return 0;
}