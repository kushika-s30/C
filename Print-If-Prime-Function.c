#include <stdio.h>
int printIfPrime(int n);
int n1,n2,count;
int main()
{
    printf("Enter n1 and n2");
    scanf("%d %d",&n1,&n2);
    for(int i=n1;i<=n2;i++){
        printIfPrime(i);
    }
    return 0;
}

int printIfPrime(int n){
        count=0;
        for(int j=1;j<=n;j++){
            if(n%j==0){
                count++;
            }
        }
        if(count==2){
            printf("%d ",n);
        }
}
