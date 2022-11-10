bool binarySearch(int arr[], int start, int end, int key, int curr){
    while(start<=end){
        int mid = start+(end-start)/2;
        if(arr[mid]==key && mid!=curr){
            return 1;
        }else if(arr[mid]<key){
            start=mid+1;
        }else{
            end=mid-1;
        }
    }
    
    return 0;
}

bool findPair(int arr[], int size, int d){
    sort(arr, arr+size);
    for(int i=0; i<size; i++){
        int t = arr[i] + d;
        if(binarySearch(arr, 0, size-1, t, i)){
            return true;
        }
    }
    
    return false;
    
}
