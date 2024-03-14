#include <bits/stdc++.h>
using namespace std;
void swapalt(int arr[],int len) {
    int start = 0;
    int end = len-1;
    while (start < end) {
        swap(arr[start],arr[start+1]);
        start += 2;
    }
}
int main() {
    int arr[100];
    int size;
    cin >> size;
    for(int i=0;i<size;i++) {
        cin >> arr[i];
    }
    swapalt(arr,size);
    for(int i=0;i<size;i++) {
        cout << arr[i] << " ";
    }

    return 0;
}