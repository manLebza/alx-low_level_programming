#ifndef HASH_TABLES_H
#define HASH_TABLES_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct shash_node_s -> the object of a sorted hash table
 * @key: the key, unique string in the hash_table
 * @next: pointer to the next node of the linked list
 * @sprev: pointer to the previous element of the sorted linked list
 * @snext: pointer to next element of the sorted linked list
 * @value: the value corresponding to a key
 */
typedef struct shash_node_s
{
	char *key;
	char *value;
	struct shash_node_s *next;
	struct shash_node_s *sprev;
	struct shash_node_s *snext;
} shash_node_t;

/**
 * struct shash_table_s -> sorted hash table data structure
 * @size: the size of the array
 * @array: an array of size @size
 * @shead: a pointer to the first element of the sorted linked list
 * @stail: pointer to the last element of the sorted linked list
 */
typedef struct shash_table_s
{
	unsigned long int size;
	shash_node_t **array;
	shash_node_t *shead;
	shash_node_t *stail;
} shash_table_t;

/**
 * struct hash_node_s -> object of the hash table
 * @key: the key, unique string to the hash table
 * @value: value corresponding to the key
 * @next: pointer to the next object of the list
 */
typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s -> hashTable data structure
 * @size: size of the array
 * @array: an array of size @size
 */
typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t;


hash_table_t *hash_table_create(unsigned long int size);
unsigned long int hash_djb2(const unsigned char *str);
unsigned long int key_index(const unsigned char *key, unsigned long int size);
int hash_table_set(hash_table_t *ht, const char *key, const char *value);
char *hash_table_get(const hash_table_t *ht, const char *key);
void hash_table_print(const hash_table_t *ht);
void hash_table_delete(hash_table_t *ht);

/* 100-sorted_hash_table.c*/
shash_table_t *shash_table_create(unsigned long int size);
shash_node_t *add_n_shash(shash_node_t **, const char *, const char *);
void add_i_shash(shash_table_t *ht, shash_node_t *new);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_print(const shash_table_t *ht);
void shash_table_print_rev(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);

#endif /* HASH_TABLES_H */
