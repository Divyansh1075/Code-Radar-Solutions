#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    if (arr[0] > arr[1])
        return arr[0];

    for(int i=1; i<=n; i++){
        if(arr[i] > arr[i+1] &&  arr[i] > arr[i-1]){
            printf("%d", arr[i]);
        }
    }
    if (arr[n - 1] > arr[n - 2])
        return arr[n - 1];

    return 0;

}