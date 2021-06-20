#include <stdio.h>
#include <stdlib.h>
int main()
{
    int* rotateLeft(int d, int arr_count, int* arr, int* result_count);
    int arr[5]={1,2,3,4,5};
    int* result_count;
    int* res=rotateLeft(2,5,arr,result_count);
    //printf("%d",*(res+2));
    return 0;

}

int* rotateLeft(int d, int arr_count, int* arr, int* result_count) {
    *result_count=arr_count;
    int *result=malloc((*result_count)*(sizeof(int)));
    
    for(int x=0;x<d;x++){
        printf("It%d: ",x);
        int r=1;
        *(result+(arr_count-1))=*(arr+0);
        
        for(int i=0;i<arr_count-1;i++){
            *(result+i)=*(arr+r);
            r++;
        }
        printf("%d ",arr[0]);
        arr=result;
        printf("\n");
        
    }
    return result;
}
