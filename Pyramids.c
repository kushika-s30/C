#include<stdio.h>
char x='*',new[10];
int main(){
    puts("Half pyramid with * :\n");
    for(int i=0;i<6;i++){
        new[i]=x;
        puts(new);
    }
    
    puts("\nHalf pyramid of numbers :\n");
    for(int i=1;i<6;i++){
        for(int j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    
    puts("\nHalf pyramid of alphabets :\n");
    for(char i='A';i<'F';i++){
        for(char j='A';j<=i;j++){
            printf("%c",j);
        }
        printf("\n");
    }
    
    puts("\nInverted half pyramid of * :\n");
    for(int i=6;i>=1;i--){
        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
   
    return 0;
    
}
