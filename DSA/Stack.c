#include<stdio.h>
#include<stdlib.h>

struct Stack{
        int top;
        unsigned int capacity;
        int* array;
};
int isFull();    
//struct Stack* createStack(unsigned int capacity){
    //struct Stack* stack=()malloc(sizeof(struct Stack));
//}    
int main(){
    
    
    int x=isFull();
    printf("%d",x);
    return 0;
}

int isFull(struct Stack* stack){
    return (stack->top)==(stack->capacity)-1;
}

int isEmpty(struct Stack* stack){
    return (stack->top)==-1;
}
