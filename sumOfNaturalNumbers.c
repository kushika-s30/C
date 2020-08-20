#include <stdio.h>
int n,count;
int addNum(int n1);
int main()
{
    printf("Enter n");
    scanf("%d",&n);
    printf("Sum = %d", addNum(n));
    return 0;
}

int addNum(int n1){
    if(n1!=0){
        return n1+addNum(n1-1);   
    }
    else{
        return n1;
    }
}
