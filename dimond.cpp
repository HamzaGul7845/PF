#include<stdio.h>
int main(){
  int i, j, rows, space;
  printf("Enter number of rows: ");
  scanf("%d", &rows);
  space = 0;
  for(i=rows;i>=1;i--){
    for(j=1;j<=space;j++){
      printf(" ");
    }
    for(j=1;j<=2*i-1;j++){
      printf("*");
    }
    printf("\n");
    space++;
  }
  space = rows-1;
  for(i=1;i<=rows;i++){
    for(j=1;j<=space;j++){
      printf(" ");
    }
    for(j=1;j<=2*i-1;j++){
      printf("*");
    }
    printf("\n");
    space--;
  }
  return 0;
}

