#include <stdio.h>
#include <stdlib.h>

int main()
{ int n,i,j;
    printf("Enter number of the elements:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements:\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Unique elements are:\n");
    for(i=0;i<n;i++){
        for(j=0;j<i;j++)
            if(arr[i]==arr[j]){
              break;
     }
     if(i==j){
      printf("%d\n",arr[i]);

    }
   }

    return 0;
}
