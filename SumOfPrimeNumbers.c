#include <stdio.h>
int n,count;
int checkIfPrime(int n1);
int main()
{
    printf("Enter n");
    scanf("%d",&n);
    for(int i=2;i<=n/2;i++){
        for(int j=2;j<=n;j++){
            if(i+j==n){
                if(checkIfPrime(i)==1 && checkIfPrime(j)==1){
                    printf("\n%d + %d = %d",i,j,n);
                }
            }
        }
    }

    return 0;
}

int checkIfPrime(int n1){
        count=0;
        for(int j=1;j<=n1;j++){
            if(n1%j==0){
                count++;
            }
        }
        if(count==2){
            return 1;
        }
}
