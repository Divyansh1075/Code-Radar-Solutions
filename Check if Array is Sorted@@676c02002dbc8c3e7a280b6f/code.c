#include <stdio.h>
#include <stdbool.h>
int main(){
    int n;
    int arr[n];
    bool a = true;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<n; i++){
        if(arr[i] > arr[i+1]){
            a = false;
            break;
        }
        
    }

    if(a == true){
        printf("Sorted");
    } 
    else{
        printf("Not Sorted");
    } 


    return 0;
    
}