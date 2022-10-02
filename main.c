#include <stdio.h>

int main(void) {
  for(int i = 1; i < 101; i++){
    if(i%3 == 0 || i%5 == 0){
      if(i%3 == 0){
        printf("Foo");
      }
      if(i%5 == 0){
        printf("Baa");
      }
    }
    else{
      printf("%d", i);
    }
    printf("\n");
  }
  
  return 0;
}
