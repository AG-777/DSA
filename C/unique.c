bool uniqueOccurrences(int* arr, int arrSize) {
    int arr2[1000]={arr[0]};
    for(int m=0; m<arrSize; m++) {
        for(int n=0; n<arrSize; n++) {
            if(arr[m] > arr[n]) {
                int temp = arr[m];
                arr[m] = arr[n];
                arr[n] = temp;
            }
        }
    }
    int j =1;
    for(int i=1; i<arrSize; i++) {
        if(arr[i] != arr[i-1]) {
            arr2[j]=arr[i];
            j++;
        }
    }
    int count[1000]={0};
    for(int i=0; i<j; i++) {
        for(int l=0; l<arrSize; l++) {
            if(arr[l] == arr2[i]) {
                count[i]++;
            }
        }
    }
    for(int m=0; m<j; m++) {
        for(int n=0; n<j; n++) {
            if(count[m] > count[n]) {
                int temp = count[m];
                count[m] = arr2[n];
                count[n] = temp;
            }
        }
    }
    int k =1;
    for(int i=1; i<j; i++) {
        if(arr[i] == arr[i-1]) return 1;
    }
    return 0;
}