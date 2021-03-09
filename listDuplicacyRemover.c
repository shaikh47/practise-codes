#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};


void insertEnd(struct node** headRef,int dataToInsert){
    struct node* temp=*headRef;
    struct node* newNode=(struct node*)malloc(sizeof(struct node*));
    newNode->data=dataToInsert;
    newNode->next=NULL;
    if(*headRef==NULL){
        *headRef=newNode;
    }else{
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newNode;
    }
}


void printList(struct node* headRef){
    while(headRef!=NULL){
        printf("%d -> ",headRef->data);
        headRef=headRef->next;
    }
}


void duplicacyRemover(struct node* headRef){
    struct node* temp1=headRef;
    struct node* beforeNode=NULL;
    struct node* temp2;

    while(temp1->next!=NULL){
        temp2=temp1->next;
        beforeNode=temp1;
        while(temp2!=NULL){
            if(temp1->data == temp2->data){
                beforeNode->next=temp2->next;
                break;
            }
            beforeNode=temp2;
            temp2=temp2->next;
        }
        temp1=temp1->next;
    }
}

int main(){
    struct node* head=NULL;
    for (int i = 0; i < 5; i++)
    {
        int input;
        scanf("%d",&input);
        insertEnd(&head,input);
    }
    printf("\nEntried List: ");
    printList(head);

    duplicacyRemover(head);

    printf("\nList after duplicacy removal: ");
    printList(head);
    return 0;
}
