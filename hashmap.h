#define HASHMAP_SIZE 13

typedef struct {
  int *entries;
} HashMap;

HashMap *new_hashmap(void);
void add_entry(HashMap *, char *, int);
int get_entry(HashMap *, char *);
void delete_hashmap(HashMap *);
