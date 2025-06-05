#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define SIZE 5

int array[SIZE];

void push_element(int* top,int data){
    if(*top>=SIZE-1){
        printf("stack is overflow for element %d\n",data);
    }
    else{
        *top=*top+1;
        array[*top]=data;
    }
}

void pop_element(int* top){
    if(*top <0){
        printf("Stack is underflow");
    }
    else{
        *top=*top-1;
    }
}
void print_array(int array[],int* top){
    for(int i=0;i<=*top;i++){
        printf("%d ",array[i]);
    }
    printf("\n");
}
int main(){
    int top=-1;
    push_element(&top,10);
    push_element(&top,20);
    push_element(&top,30);
    push_element(&top,40);
    push_element(&top,50); 
    push_element(&top,60);
    push_element(&top,70);
    //printing array
    printf("Elements in the stack          :- ");
    print_array(array,&top);
    //pop elements in the array
    int n =3;
    for(int i=0;i<n;i++){
        pop_element(&top);
    }
    printf("Elements in the stack after pop:- ");
    //printing array
    print_array(array,&top);


}