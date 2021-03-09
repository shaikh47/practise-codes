#include<stdio.h>
#define LENGTH(x) (sizeof(x)/sizeof(char)-2)

void recurse(int num){  //prints num to 10 in increasing order
    if(num<10){
        printf("%d ",num);
        recurse(num+1);
    }
}

int factorial(int num){ //calculates the factorial of a number
    if(num>=1){
        printf("%d ",num);
        return num*factorial(num-1);
    }
    else return 1;
}

void printDigit(int num){ //prints digit separetely using recursion
    if(num>0){
        printDigit(num/10);
        printf("%d ",num%10);
    }
}


int main(){
    printDigit(1234);
    return 0;
}