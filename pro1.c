#include <stdio.h>
#include <stdlib.h>

int main()
{ int n,choice,i,j;
  int temp;
    printf("Enter the number of elemnts:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elemnts of the array:\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("For ascending sorting enter 0, for descending enter 1:\n");
    scanf("%d",&choice);
    if(choice==0){
        for(i=0;i<n-1;i++){
            for(j=0;j<(n-1)-i;j++){
                if(arr[j]>arr[j+1]){
                    temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
            }
        }
    }

    else if(choice==1){
        for(i=0;i<n-1;i++){
            for(j=0;j<(n-1)-i;j++){
                if(arr[j]<arr[j+1]){
                    temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
    }
     }
      }
       }
       else{
       printf("Wrong choice!\n");
       }
       printf("After sorting:\n");
       for(i=0;i<n;i++){
        printf("%d\n",arr[i]);
       }

    return 0;
}
