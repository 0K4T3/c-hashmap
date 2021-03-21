#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hashmap.h"

int calc_hash(char *key) {
  int hash = 0;
  for (int i = 0; i < strlen(key); i++) {
    hash += (int)key[i];
  }
  hash %= HASHMAP_SIZE;
}

HashMap *new_hashmap(void) {
  HashMap *hashmap = (HashMap *)malloc(sizeof(HashMap));
  hashmap->entries = (int *)malloc(sizeof(int) * HASHMAP_SIZE);
  return hashmap;
}

void add_entry(HashMap *hashmap, char *key, int value) {
  int hash = calc_hash(key);
  hashmap->entries[hash] = value;
}

int get_entry(HashMap *hashmap, char *key) {
  int hash = calc_hash(key);
  return hashmap->entries[hash];
}

void delete_hashmap(HashMap *hashmap) {
  free(hashmap->entries);
  free(hashmap);
}
