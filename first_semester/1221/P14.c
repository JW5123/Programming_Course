#include <stdio.h>
#include <string.h>

void toEast(int* arr){
    int t = arr[0];
    arr[0] = arr[3];
    arr[3] = arr[1];
    arr[1] = arr[5];
    arr[5] = t;
}

void toWest(int* arr){
    int t = arr[0];
    arr[0] = arr[5];
    arr[5] = arr[1];
    arr[1] = arr[3];
    arr[3] = t;
}

void toNorth(int* arr){
    int t = arr[0];
    arr[0] = arr[4];
    arr[4] = arr[1];
    arr[1] = arr[2];
    arr[2] = t;
}

void toSouth(int* arr){
    int t = arr[0];
    arr[0] = arr[2];
    arr[2] = arr[1];
    arr[1] = arr[4];
    arr[4] = t;
}

int main(){

    int times;
    while(scanf("%d", &times) && times!=0){

        int faces[6] = {1, 6, 2, 3, 5, 4};

        while(times--){
            char a[10];
            scanf("%s", a);
            if(strcmp(a, "north") == 0){
                toNorth(faces);
            }
            if(strcmp(a, "south") == 0){
                toSouth(faces);
            }
            if(strcmp(a, "west") == 0){
                toWest(faces);
            }
            if(strcmp(a, "east") == 0){
                toEast(faces);
            }

        }

        printf("%d\n", faces[0]);
    }

    return 0;
}