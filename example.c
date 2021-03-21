#include <stdio.h>
#include "hashmap.h"

int main(void) {
  HashMap *hashmap = new_hashmap();
  printf("%p\n", hashmap);

  add_entry(hashmap, "sample", 10);
  int value = get_entry(hashmap, "sample");

  printf("%d\n", value);

  delete_hashmap(hashmap);

  return 0;
}
