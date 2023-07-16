#include<iostream>
using namespace std;
#include "sorting.h"

int main(){
    int arr[]={1,2,4,3,0,2,1,7,1,4,3,0};
    int size=sizeof(arr)/sizeof(arr[0]);
    int x;

    printf("list of 5 sorting:\n");
    printf("1.Bubble sort:\n");
    printf("2.Selection sort:\n");
    printf("3.Insertion sort:\n");
    printf("4.Quicksort:\n");
    printf("5.Counting sort:\n");
    printf("Select any sort:\n");
    scanf("%d",&x);
    printf("Before.....\n");
    display(arr, size);
    switch(x){

        case 1:
            bubblesort(arr, size);
            break;
        case 2:
            selectionsort(arr, size);
            break;
        case 3:
            insertionsort(arr, size);
            break;
        case 4:
            quicksort(arr,0,size-1);
            break;
        case 5:
            countingsort(arr,size);





}



    /*printf("Before.....\n");
    display(arr, size);*/

    //bubblesort(arr, size);
    //selectionsort(arr, size);
    //insertionsort(arr, size);
    //quicksort(arr,0,size-1);
    //countingsort(arr,size);
    printf("After.....\n");
    display(arr, size);

printf("allah");
}
