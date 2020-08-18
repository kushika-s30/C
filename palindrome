#include <stdio.h>

int main()
{
    int n,temp,rev=0;
    printf("Enter n");
    scanf("%d",&n);
    temp=n;
    while(n>0){
        rev=(rev*10)+(n%10);
        n/=10;
    }
    printf("Reverse of %d is %d.",temp,rev);
    if(rev==temp){
        printf("\nHence, %d is a palindrome.",temp);
    }
    return 0;
}
