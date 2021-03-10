#include<stdio.h>

int queue[100];
int max=-1;

int stack[100];
int stackTop=-1;

void enqueue(int data){
    max++;
    queue[max]=data;
}
int dequeue(){
    if(max==-1)
        return -1;
    else{
        int returnVal=queue[0];
        for(int i=0;i<max;i++){
            queue[i]=queue[i+1];
        }
        max--;
        return returnVal;
    }
}
void push(int data){
    stackTop++;
    stack[stackTop]=data;
}
int pop(){
    if(stackTop==-1)
        return -1;
    else{
        int returnVal=stack[stackTop];
        stackTop--;
        return returnVal;
    }
}

int main(){
    int num;
    printf("Enter a Number to check palindrome: ");
    scanf("%d",&num);

    int tempNum=num;
    while(tempNum>0){
        push(tempNum%10);
        enqueue(tempNum%10);
        tempNum=tempNum/10;
    }

    int flag=0;
    while(stackTop!=-1){
        int queueVar=dequeue();
        int stackVar=pop();
        if(queueVar==stackVar){
            continue;
        }
        else{
            printf("The number is not palindrome.\n");
            flag=1;
            break;
        }
    }
    if(flag == 0)
        printf("The number is palindrome.\n");
    return 0;
}
