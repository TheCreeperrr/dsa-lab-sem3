#include <stdio.h>

int stack[10];
int n = 10;
int top = -1;

void isEmpty(){
    if (top==-1) printf("\nThe Stack is Empty.\n");
    else printf("\nThe Stack is not Empty.\n");
}

void isFull(){
    if (top==n-1) printf("\nThe Stack is Full.\n");
    else printf("\nThe Stack is not Full.\n");
}

void push(int num){
    if (top==n-1) return;
    top++;
    stack[top] = num;
}

int pop(){
    if (top==-1) return -1;
    int topi = stack[top];
    stack[top] = 0;
    top--;
    return topi;
}

void peek(){
    printf("\nThe current top element in stack is: %d", stack[top]);
}

void display(){
    for(int i = 0; i <= top; i++) printf("%d ", stack[i]);
    printf("\n");
}

int main() {
    
    isEmpty();
    
    printf("\nPushing 10, 20, 30, 25 to Stack: \n");
    push(10);
    push(20);
    push(30);
    push(25);
    display();

    printf("\nPopping twice: \n");
    pop();
    pop();
    display();

    peek();

    printf("\nPushing 8 more elements: \n");
    for (int i = 0; i < 8; i++) push(i*5);
    display();

    isFull();

    return 0;
}