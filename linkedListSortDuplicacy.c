#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};

void printList(struct node* headRef){
    while(headRef!=NULL){
        printf("%d -> ",headRef->data);
        headRef=headRef->next;
    }
    printf("\n");
}

void insertAtEnd(struct node** headRef, int dataToAdd){
    struct node* temp=*headRef;

    struct node* newNode=(struct node*)malloc(sizeof(struct node*));
    newNode->data=dataToAdd;
    newNode->next=NULL;

    if(*headRef==NULL){
        *headRef=newNode;
    }
    else{
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newNode;
    }
}

void sort(struct node** headRef){
    int count=0;

    struct node* temp=*headRef;
    //count the element number in the list
    while(temp!=NULL){
        temp=temp->next;
        count++;
    }
    temp=*headRef;

    for (int i=0;i<count;i++){
        for (int x=0;x<count-i-1;x++){
            if(temp->data > temp->next->data){
                int swapVar=temp->data;
                temp->data=temp->next->data;
                temp->next->data=swapVar;
            }
            if(temp->next!=NULL)
                temp=temp->next;
        }
        temp=*headRef;
    }
}

void swap(struct node* val1,struct node* val2){
    int swapVar=val1->data;
    val1->data=val2->data;
    val2->data=swapVar;
}


//Write a function to remove the duplicate item in a linked list L where the head is given and return the list L
void duplicacyRemover(struct node* headRef){
    struct node* temp=headRef;
    while(temp->next!=NULL){
        if(temp->data == temp->next->data){
            temp->next=temp->next->next;
            //temp->next->data=0;
        }
        if(temp->next!=NULL)
            temp=temp->next;
    }
}

int main(){
    struct node* head=NULL;
    int input;

    for(int i=0;i<5;i++){
        scanf("%d",&input);
        insertAtEnd(&head,input);
    }

    printList(head);
    sort(&head);
    printf("now sorted list: ");
    printList(head);

    printf("After removing duplicacy: ");
    duplicacyRemover(head);
    printList(head);
    return 0;
}
