#include<stdio.h>
int main(){
    int n;
    
    int sorted = 1;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<n; i++){
        if(arr[i] > arr[i+1]){
            sorted = 0;
        }
    }
    
    if(sorted == 1){
        printf("Sorted");
    } 
    else{
        printf("Not Sorted");
    } 


    return 0;
    
}