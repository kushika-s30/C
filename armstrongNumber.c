#include <stdio.h>
#include <math.h>
int main()
{
    int n,r,a=0,d=0;
    printf("Enter number");
    scanf("%d",&n);
    int temp1=n,temp2=n;
    
    while(n>0){
        d++;
        n=n/10;
    }
    
    while(temp1!=0){
        r=temp1%10;
        a=a+(pow(r,d));
        temp1=temp1/10;
    }
    if(a==temp2){
        printf("Armstrong  number");
    }
}
