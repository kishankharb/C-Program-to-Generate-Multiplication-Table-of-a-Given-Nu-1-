#include <stdio.h>

int main() {
  int table ;
  printf("put your favourate number and get full table\n");
  scanf("%d", &table);
  for(int i = 1; i <= 10 ; i++){
  printf(" \n your table is %d x %d = %d",table,i,(table*i));
    }
  return 0;
}