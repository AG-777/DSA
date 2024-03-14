#include<bits/stdc++.h>
using namespace std;
#include <bits/stdc++.h> 
void printarr(int arr[],int size) {
    for(int i=0; i<size; i++) {
        cout << arr[i] << " ";
    }
}
void sort012(int *arr, int n)
{  
    int i =0,j=n-1;
    int after0 = 0;
    while(arr[j] == 2) j--;
    while(i<=j) {
       if(arr[i]==0) {
          swap(arr[after0++],arr[i++]);
       }
       else if(arr[i] == 2) {
          swap(arr[i],arr[j--]);
       }
       else i++;
    }
}
int main() {
    int n;
    cin >> n;
    int arr[100];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    sort012(arr,n);
    printarr(arr,n);
    return 0;
}