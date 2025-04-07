void bubbleSort(int arr[],int n){
    for(int i=0; i<=n-1; i++){
        int mini = i;
        for(int j=i; j<=n-1; j++){
            if(arr[j] < arr[mini]){
                mini = j;
            }    
        }
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp; 
    }
}

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        printf("%d" , arr[i]);
    }
}
