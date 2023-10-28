#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *oddpush(struct node *head, int data){
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->data=data;
    temp->next=head;
    return temp;
}

struct node *evenpush(struct node *head, int data){
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    temp->data= data;
    temp->next=NULL;

    if(head==NULL)
        return temp;
    
    struct node *current=head;
    while(current->next!=NULL){
        current=current->next;
    }

    current->next=temp;
    return head;
}

void printlist(struct node *head) {
    struct node *current=head;
    while(current!=NULL){
        printf("%d\n",current->data);
        current=current->next;
    }
}

int main() {
    struct node *head=NULL;
    int num;
    printf("Please enter the numbers of your list, enter -1 when you're done:\n");

    while(1){
        scanf("%d",&num);

        if(num==-1){
            break;
        }

        if(num%2==0){
            head=evenpush(head, num); 
        } 
		else{
            head=oddpush(head, num); 
        }
    }
    
    printf("Completed List:\n");
    printlist(head);

    struct node *current=head;
    while(current!=NULL){
        struct node *next=current->next;
        free(current);
        current=next;
    }

    return 0;
}
