#include <stdio.h>
int main()
{
    printf("Upper-case letters: "); 
    for(int i=65;i<=90;i++){
       printf("%c ",i);
    }
    printf("\nLower-case letters: ");
    for(int i=97;i<=122;i++){
       printf("%c ",i);
    }

    return 0;
}
