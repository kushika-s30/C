#include<stdio.h>
#include<stdlib.h>
#include <limits.h>


//USER_DEFINED STACK STRUCTURE
struct Stack
{
        int top;
        unsigned int capacity;
        int* array;
};

//FUNCTION THAT CREATES STACK
struct Stack* createStack(unsigned int capacity)
{
    struct Stack* stack=(struct Stack*)malloc(sizeof(struct Stack)); //DMA for the stack(struct):
    stack->capacity=capacity;
    stack->top=-1;
    stack->array=(int*)malloc(stack->capacity*sizeof(int)); //DMA for the array:
    return stack; //function returns a pointer of stack structure
}

//FUNCTION DECLARATION
void push(struct Stack* stack,int item);
int pop(struct Stack* stack);
int peek(struct Stack* stack);

//TESTING STACK OPERATIONS
int main()
{
    struct Stack* stack = createStack(100);
 
    push(stack, 10);
    push(stack, 20);
    push(stack, 30);
    
    printf("%d is the top element\n",peek(stack));
 
    printf("%d popped from stack\n", pop(stack));
    printf("%d is the top element\n",peek(stack));
    
    printf("%d popped from stack\n", pop(stack));
    printf("%d is the top element\n",peek(stack));
    
    printf("%d popped from stack\n", pop(stack));
    printf("%d is the top element\n",peek(stack));
 
    return 0;
}

//FUNCTION TO CHECK IF STACK IS FULL
int isFull(struct Stack* stack)
{
    return (stack->top)==(stack->capacity)-1;
}

//FUNCTION TO CHECK IF STACK IS EMPTY
int isEmpty(struct Stack* stack){
    return (stack->top)==-1;
}

//PUSH OPERATION 
void push(struct Stack* stack,int item)
{
    if (isFull(stack)){
        return;
    }
    else{
        stack->array[++stack->top] = item;
    }
    printf("%d pushed to stack\n", item);
}

//POP OPERATION
int pop(struct Stack* stack)
{
    if(isEmpty(stack)){
        return INT_MIN;
    }
    else{
        //printf("Stack pointer points to %d\n",stack->array[stack->top--]);
        return stack->array[stack->top--];
    }
}

//PEEK OPERATION
int peek(struct Stack* stack)
{
    if (isEmpty(stack)){
        return INT_MIN;
    }
    else{
        return stack->array[stack->top];
    }
}
