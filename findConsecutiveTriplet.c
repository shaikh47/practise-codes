/*
Find the number of consecutive triplets in a given integer array A.
Example:
input: 3 2 4 5 8 9 10
output: 3
explanation: sorted : 2 3 4 5 8 9 10
now we can see there are 3 consecutive triplets. those are : 2 3 4, 3 4 5 & 8 9 10
*/
#include<stdio.h>
#define LENGTH(x) (sizeof(x)/sizeof(x[0]))


int tripleCounter(int* arr, int count){
//first sort the numbers
int consecutive=0;
for(int i=0;i<count-1;i++){
    for(int x=0;x<count-i-1;x++){
        //swap
        if(arr[x]>arr[x+1]){
            int swap;
            swap=arr[x];
            arr[x]=arr[x+1];
            arr[x+1]=swap;
        }
    }
}

//check for consecutive triplets
for(int i=0;i<count-1;i++){
    if(arr[i]+1==arr[i+1] && arr[i]+2==arr[i+2]){
        consecutive++;
    }
}
return consecutive;
}

int main(){
    int array[]={3, 2, 4, 5, 8, 9, 10, 11};
    int count=LENGTH(array);
    int tripletNumber=tripleCounter(array,count);
    printf("There are %d consecutive triplets in the list.\n",tripletNumber);
    return 0;
}
