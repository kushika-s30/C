// To find series of n terms
#include <stdio.h>

int main()
{
    int s1=0,s2=1,sum,n;
    printf("Enter n");
    scanf("%d",&n);
    printf("%d %d ",s1,s2);
    for(int i=1;i<=n-2;i++){
        sum=s1+s2;
        printf("%d ",sum);
        s1=s2;
        s2=sum;
    }

    return 0;
}
