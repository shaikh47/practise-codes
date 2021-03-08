#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};


void insertAtEnd(struct node** headRef, int dataToInsert){
    struct node* tempHead = *headRef;

    struct node* newNode=(struct node*)malloc(sizeof(struct node*));
    newNode->data=dataToInsert;
    newNode->next=NULL;

    if(*headRef==NULL){
        *headRef=newNode;
    }
    else{
        while(tempHead->next != NULL){
            tempHead=tempHead->next;
        }
        tempHead->next=newNode;
    }
}


void printList(struct node* temp){
    while(temp!=NULL){
        printf("%d -> ",temp->data);
        temp=temp->next;
    }
}

int main(){
    struct node* head=NULL;
    printf("Enter some values to insert: ");
    for(int i=0;i<5;i++){
        int dataToInsert;
        scanf("%d",&dataToInsert);
        insertAtEnd(&head,dataToInsert);
    }
    printList(head);
    return 0;
}


