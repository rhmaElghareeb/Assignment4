#include <stdio.h>
#include <stdlib.h>

int main()
{ int n,i,j,temp;
    printf("Enter number of elemnts:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements:\n");
    for(i=0;i<n;i++){
        scanf("%d\n",&arr[i]);
    }

      for(i=0;i<n-1;i++){
        for(j=0;j<(n-1)-i;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
      }

    printf("The second largest number is %d. ",arr[n-2]);

    return 0;
}
