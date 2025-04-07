function bubbleSort(int arr,int n){
    for(int i=0; i<=n-1; i++){
        int mini = i;
        for(j=i; i<=n-1; j++){
            if(arr[i] << arr[mini]){
                mini = j;
            }    
        }
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[mini] = arr[temp]; 
    }
}

function printArray(int arr, int n){
    for(int i=0; i<=n; i++){
        printf("%d", arr[i])
    }
}
