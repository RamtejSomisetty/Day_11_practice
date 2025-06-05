#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define SIZE 5

typedef struct node{
    int data;
    struct node* next;
}node;

node* create_new_node(int data){
    node* new_node = malloc(sizeof(node));
    new_node->data=data;
    new_node->next=NULL;
    return new_node;
}

node* push_element(node* head,int data,int* top){
   
    if(*top>=SIZE-1){
        printf("the stack is overflow for element %d\n",data);
    }
    else{
        node* temp = create_new_node(data);
        temp->next = head;
        head = temp;
        (*top)++;
    }
    return head;
}

node* pop_element(node* head,int *top){
    if(*top<0){
        printf("stack is underflow\n");
    }
    else{
        *top=*top-1;
        node*temp = head;
        head=temp->next;
        temp->next=NULL;
    }
    return head;
}

void print_elements(node* head){
    node* temp=head;
    while(temp!=NULL){
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");
}
//implementatin of pop and push operations 
int main(){
    node* head=NULL;
    int top=-1;
    //pushing elements
    printf("\nElements after push() operations:-\n");
    head=push_element(head,10,&top);
    head=push_element(head,20,&top);
    head=push_element(head,30,&top);
    head=push_element(head,40,&top);
    head=push_element(head,50,&top);
    head=push_element(head,60,&top);
    //print elements
   
    print_elements(head);
    printf("\n");
    //poping elements
    for(int i=0;i<3;i++){
    printf("Elements after pop() operation:- \n");
    head=pop_element(head,&top);
    print_elements(head);
    }
}
