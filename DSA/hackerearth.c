#include<stdio.h>
#include<stdlib.h>

int main(){
	int t,N,K,f,*ptr;
	scanf("%d",&t);
	for(int i=0;i<t;i++){
		scanf("%d %d",&N,&K);
		ptr = (int*)calloc(N, sizeof(int));
		if(ptr == NULL){
            printf("Error! memory not allocated.");
            exit(0);
        }
		for(int j=0;j<N;j++){
			//scanf("%d",&A[j]);
			scanf("%d", ptr + j);
		}
		
		//func cal
		int sum=0;
		for(int i=0;i<N;i++){
			//sum=sum+A[i];
			sum=sum+*(ptr+i);
		}
		//printf("Sum: %d",sum);
		f=sum/N;
		if(f<=K)
	        printf("%d\n",0);	
	    else{
	        int x=1;
	        while(f>K){
		        sum+=x;
		        N++;
		        f=sum/N;
		        printf("%d\n",x);
		        x++;
		}
	}
}
free(ptr);
return 0;
}
