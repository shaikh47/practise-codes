#include<stdio.h>

void bubbleSort(int* arr,int length){
    for(int i=0;i<length;i++){
        for(int x=0;x<length-i-1;x++){
            if(arr[x]>arr[x+1]){
                int swap;
                swap=arr[x];
                arr[x]=arr[x+1];
                arr[x+1]=swap;
            }
        }
    }
}

int main(){
    int array[]={9,8,7,6,5,4,3,2,1};
    int length=sizeof(array)/sizeof(array[0]);
    bubbleSort(&array,length);

    for(int i=0;i<sizeof(array)/sizeof(array[0]);i++){
        printf("%d ",array[i]);
    }
    return 0;
}
