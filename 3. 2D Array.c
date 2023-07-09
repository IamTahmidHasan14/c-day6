#include<stdio.h>
int main(){
   int array[3][3];
   int c, r;
   for(r=0; r<3; r++){
      for(c=0; c<3; c++){
         printf("Enter value for array [%d][%d]:", r, c);
         scanf("%d", &array[r][c]);
      }
   }
   printf("\n2D array elements:\n");
   for(r=0; r<3; r++){
      for(c=0; c<3; c++){
         printf("%d ", array[r][c]);
         if(c==3){
            printf("\n");
         }
      }printf("\n");
   }
   return 0;
}
