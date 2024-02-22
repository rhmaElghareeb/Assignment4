#include <stdio.h>
#include <stdlib.h>
void rowsum(int arr[5][5]){
    int sum,i,j;
for(i=0;i<5;i++){
    for(j=0;j<5;j++){
      sum+=arr[i][j];
    }
    printf("%d\t",sum);
    sum =0;
}
}

void coulumnsum(int arr[5][5]){
int sum,i,j;
for(j=0;j<5;j++){
    for(i=0;i<5;i++){
      sum+=arr[i][j];
    }
    printf("%d\t",sum);
    sum =0;
}
}

int main()
{ int arr[5][5],i,j;
   for(i=0;i<5;i++){
    printf("Enter row %d:\n",i+1);
    for(j=0;j<5;j++){
      scanf("%d",&arr[i][j]);
    }
 }
  printf("Row Totals:\n");
  rowsum(arr);
   printf("\n");
  printf("Coulumn Totals:\n");
  coulumnsum(arr);

    return 0;
}
