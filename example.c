#include <stdio.h>
#include "hashmap.h"

int main(void) {
  HashMap *hashmap = new_hashmap();
  printf("%p\n", hashmap);
  
  return 0;
}
