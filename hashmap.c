#include <stdlib.h>
#include "hashmap.h"

HashMap *new_hashmap(void) {
  HashMap *entry = (HashMap *)malloc(sizeof(HashMap));
  return entry;
}
