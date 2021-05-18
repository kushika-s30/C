//write code to reverse a string, number using stack 
#include<stdio.h>
#include<stdlib.h>

/*Each node in a list consists of at least two parts:
1) data
2) Pointer (Or Reference) to the next node*/

// A linked list node
struct Node {
    int data;
    struct Node* next;//a pointer that points to the next node of node structure
};

// This function prints contents of linked list starting from the given node
void printList(struct Node* n)
{
    while (n != NULL){
        printf(" %d ", n->data);
        n = n->next;
    }
}

//creating linked list with 3 nodes
int main(){
    struct Node* head = NULL;
    struct Node* second = NULL;
    struct Node* third = NULL;
    
    // allocate 3 nodes in the heap
    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
    
    head->data = 5; // assign data in first node
    head->next = second; // Link first node with the second node
    
    // assign data to second node
    second->data = 6;
    // Link second node with the third node
    second->next = third;
    
    third->data = 9; // assign data to third node
    third->next = NULL; //next pointer of the third block is made NULL to indicate linked list is terminated here.
    
    printList(head);
    return 0;
}
