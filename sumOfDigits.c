#include<stdio.h>
int sumofdig(int n);

int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    printf("Sum of digits = %d",sumofdig(n));
    return 0;
}
int sumofdig(int n){
    int l;
    if(n!=0){
        l=n%10;
        return l+sumofdig(n/10);
    }
    else{
        return 0;
    }
}
