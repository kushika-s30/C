#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

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


//FUNCTION TO CHECK IF STACK IS FULL
int isFull(struct Stack* stack)
{
    return (stack->top)==(stack->capacity)-1;
}

//FUNCTION TO CHECK IF STACK IS EMPTY
int isEmpty(struct Stack* stack)
{
    return (stack->top)==-1;
}

//PUSH OPERATION 
void push(struct Stack* stack,int item)
{
    if (isFull(stack))
        return;
    else
        stack->array[++stack->top] = item;
}

//POP OPERATION
int pop(struct Stack* stack)
{
    if(isEmpty(stack))
        return INT_MIN;
    else
        return stack->array[stack->top--];
}

void binary(struct Stack* stack,int n)
{
    int num=n;
    while(n>0)
    {
        push(stack,n%2);
        n=n/2;
    }
    while(!isEmpty(stack))
    {
        printf("%d",pop(stack));
    }
    
    printf(" is the binary representation of %d.\n\n",num);
    return;
}
    
int main()
{
     int n;
     printf("Enter integer to convert to binary:");
     scanf("%d",&n);
     struct Stack* stack = createStack(100);
     binary(stack,n);
     return 0;
}
