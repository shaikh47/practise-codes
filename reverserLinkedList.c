#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};

void insertAtEnd(struct node** headRef, int dataVal){
    struct node* newNode=(struct node*)malloc(sizeof(struct node*));
    newNode->data=dataVal;
    newNode->next=NULL;

    if(*headRef==NULL){
        *headRef=newNode;
    }
    else{
        struct node* temp=*headRef;
        while(temp->next!=NULL)
            temp=temp->next;
        temp->next=newNode;
    }
}



void printList(struct node* headRef){
    while(headRef!=NULL){
        printf("%d -> ",headRef->data);
        headRef=headRef->next;
    }
    printf("NULL\n");
}

void reverseList(struct node** headRef){
    struct node* temp=*headRef;
    int flag=1;//keeps track of the head node of the list
    struct node* nextNode=NULL;
    struct node* prevNode=NULL;

    while(temp->next!=NULL){
        nextNode=temp->next;

        temp->next=prevNode;
        prevNode=temp;
        temp=nextNode;
    }
    temp->next=prevNode;
    *headRef=temp;
}

int main(){
    struct node* head=NULL;
    int val;
    for (int i=0;i<5;i++){
        //scanf("%d",&val);
        insertAtEnd(&head,i);
    }
    printf("\nList entered: ");
    printList(head);

    reverseList(&head);
    printf("\nList after reversing: ");
    printList(head);
    return 0;
}
