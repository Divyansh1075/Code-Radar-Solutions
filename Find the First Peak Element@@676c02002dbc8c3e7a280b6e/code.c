#include<stio.h>
int main(){
    int a;
    scanf("%d", &a);
    int arr[a];
    for(int i=1; i<a; i++){
        if(arr[i] > (arr[i+1] && arr[i-1])){
            printf("%d", arr[i]);
        }
    }

    return 0;

}