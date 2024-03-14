#include <bits/stdc++.h>
using namespace std;
void printarr(int arr[],int size) {
    for(int i=0; i<size; i++) {
        cout << arr[i] << " ";
    }
}
int main() {
    int arr[8] = {1,0,0,1,0,0,1,0};
    int i=0,j=7;
    while(i < j) {
        if(arr[i] == arr[j]) arr[i]==0?j++:i--;
        else if(arr[i]>arr[j]) swap(arr[i],arr[j]);
        i++,j--;
    }
    printarr(arr,8);
    
    return 0;
}