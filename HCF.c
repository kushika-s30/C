//HCF of two numbers 

#include <stdio.h>

int main()
{
    int n1,n2,hcf;
    printf("Enter n1 n2");
    scanf("%d %d",&n1,&n2);
    
    for(int i=1;i<=n1 && i<=n2;i++){
        if(n1%i==0 && n2%i==0){
            hcf=i;
        }
    }
    printf("%d",hcf);
    return 0;
}
