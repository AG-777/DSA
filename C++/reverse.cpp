#include <bits/stdc++.h>
using namespace std;
void reverse_arr(int a[],int length) {
    int start = 0;
    int end = length-1;
    while(start < end) {
        swap(a[start],a[end]);
        start++,end--;
    }
}
int main() {
    int arr[100];
    int size;
    cin >> size;
    for(int i=0;i<size;i++) {
        cin >> arr[i];
    }
    reverse_arr(arr,size);
    for(int i=0;i<size;i++) {
        cout << arr[i] << " ";
    }
    return 0;
}