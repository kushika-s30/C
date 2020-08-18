#include <stdio.h>

int main()
{
    int n1,n2,count;
    printf("Enter n1 and n2");
    scanf("%d %d",&n1,&n2);
    for(int i=n1;i<=n2;i++){
        count=0;
        for(int j=1;j<=i;j++){
            if(i%j==0){
                count++;
            }
        }
        if(count==2){
            printf("%d ",i);
        }
    }

    return 0;
}
