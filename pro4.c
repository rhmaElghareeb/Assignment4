#include <stdio.h>
#include <stdlib.h>
void repeated_elements(int arr[10]){
 int i,j;
    printf("Repeated elements are:\n");
    for(i=0;i<10;i++){
        for(j=i+1;j<10;j++){
            if(arr[i]==arr[j]){
            printf("%d\n",arr[i]);
               break;

     }
    }
   }
     printf("\n");
  }
int main()
{ int arr[10],i;
 printf("Enter the elements:\n");
     for(i=0;i<10;i++){
        scanf("%d",&arr[i]);
     }
    repeated_elements(arr);
    return 0;
}
