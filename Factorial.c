#include <stdio.h>
int n;
int Fact(int n1);
int main()
{
    printf("Enter n");
    scanf("%d",&n);
    printf("Factorial = %d", Fact(n));
    return 0;
}

int Fact(int n1){
    if(n1!=1){
        return n1*Fact(n1-1);   
    }
    else{
        return n1;
    }
}
