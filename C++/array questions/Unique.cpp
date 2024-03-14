#include<bits/stdc++.h>
using namespace std;
int findUnique(int arr[],int len) {
    map<int,int> mp;
    int sum1=0,sum2=0;
    for(int i=0; i<len; i++) {
        //Adding Unique elements of array
        if(mp[arr[i]] == 0) {
            sum2 += arr[i];
            mp[arr[i]]++;
        }
        //Adding all elements of array
        sum1 += arr[i];
    }
    return ((2*sum2)-sum1);
}
int main() {
    int size;
    int arr[100];
    cin >> size;
    for(int i=0; i<size; i++) {
        cin >> arr[i];
    }
    int n = findUnique(arr,size);
    cout << "Unique number is " << n;
    return 0;
}