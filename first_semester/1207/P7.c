#include <stdio.h>

int element_exist(int arr[], int n, int element){
    for(int i = 0; i < n; i++){
        if(arr[i] == element){
            return 1;
        }
    }
    return 0;
}

int findIndex(int arr[], int n, int element){

    int index = -1;
    for(int i = 0; i < n; i++){
        if(element == arr[i]){
            index = i;
        }
    }
    return index;
}

int main(){

    int n, opt, target;
    scanf("%d", &n);
    int arr[n];

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    while(scanf("%d", &opt) != EOF){
        if(opt == -1)
            break;
        scanf("%d", &target);

        if(opt == 1){
            int m = element_exist(arr, n, target);
            if(m){
                printf("True\n");
            }
            else{
                printf("False\n");
            }
        }
        else if(opt == 2){
            int m = findIndex(arr, n, target);
            printf("%d\n", m);
        }
        
    }
    printf("Program ends.\n");

    return 0;
}