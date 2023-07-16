#include<iostream>
#include<stdio.h>
using namespace std;

void swap(int *a, int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

void bubblesort(int arr[], int size){
    for(int i=0; i<size; i++){
        for(int j=0; j<(size-1-i); j++){
            if(arr[j]<arr[j+1]){
                swap(&arr[j],&arr[j+1]);
            }

        }
    }
}

void display(int arr[], int size){
    for(int i=0; i<size; i++){
        printf("%d\n",arr[i]);
    }
}

void selectionsort(int arr[], int size){
    for(int i=0; i<size; i++){
        int min=i;
        for(int j=(i+1); j<size; j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        swap(&arr[i], &arr[min]);
    }
}

void insertionsort(int arr[], int size){
    for(int i=1; i<size; i++){
        int key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;

    }
}

int partition(int arr[], int low, int high){

    int pivot=arr[low];
    int i=low;
    int j=high;
    while(i<j){
        while(arr[i]<=pivot){
            i++;

        }
        while(arr[j]>pivot){
            j--;
        }
        if(i<j){
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[low],&arr[j]);
    return j;



}
void quicksort(int arr[], int low, int high){


    if(low<high){
        int j=partition(arr,low,high);
        quicksort(arr,low,j-1);
        quicksort(arr,j+1,high);
    }
}

int getmax(int arr[],int size){
    int max=arr[0];
    for(int i=1;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;



}
void countingsort(int arr[],int size){


    int output[size+1];
    int max=getmax(arr,size);
    int count[max+1];
    for(int i=0;i<=max;i++){
        count[i]=0;
    }



    for(int i=0;i<size;i++){
        count[arr[i]]++;

    }
    for(int i=1;i<=max;i++){
        count[i]=count[i]+count[i-1];
    }
    for(int i=(size-1);i>=0;i--){
        output[--count[arr[i]]]=arr[i];

    }
    for(int i=0;i<size;i++){
        arr[i]=output[i];
    }

}

