#include<stdio.h>

int main(){
    char op;
    double n1,n2;
    printf("Enter operand (+,-,*,/)");
    scanf("%c",&op);
    
    printf("Enter n1 and n2");
    scanf("%lf %lf",&n1,&n2);
    
    switch(op){
        case'+':
            printf("%.1lf - %.1lf = %.1lf", n1,n2, n1+n2);
            break;
       case '-':
            printf("%.1lf - %.1lf = %.1lf", n1,n2, n1-n2);
            break;
        case '*':
            printf("%.1lf * %.1lf = %.1lf", n1,n2, n1*n2);
            break;
        case '/':
            printf("%.1lf / %.1lf = %.1lf", n1,n2, n1/n2);
            break;
        default:
            printf("Incorrect operator");
    }
    return 0;
}
