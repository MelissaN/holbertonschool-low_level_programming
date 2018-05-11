#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	hash_table_t *ht;
	int status;
	unsigned long int idx;
	char *s = "mentioner";
	char *ss = "hetairas";
	char *sss = "heliotropes";
	char *ssss = "neurospora";

	ht = hash_table_create(1024);
	status = hash_table_set(ht, "betty", "holberton");
	printf("exited with status: %d\n", status);

	/* empty key should return 0(fail) */
	status = hash_table_set(ht, "", "holberton");
	printf("empty key should return 0: we got: %d\n", status);

	/* empty value should work and return 1 */
	status = hash_table_set(ht, "somekey", "");
	printf("empty value should work and return 1: we got: %d\n", status);

	/* collision should create linked list, return 1 */
	status = hash_table_set(ht, "mentioner", "value1");
	printf("exit status should be 1: we got %d\n", status);
	idx = key_index((const unsigned char *)s, ht->size);
	printf("key: %s\n", ht->array[idx]->key);
	status = hash_table_set(ht, "hetairas", "value2");
	printf("exited status for collision should be 1: we got %d\n", status);
	idx = key_index((const unsigned char *)ss, ht->size);
	printf("key: %s\n", ht->array[idx]->key);

	/* check that another collision creates and prints updated head node */
	status = hash_table_set(ht, "heliotropes", "value3");
	printf("exit status should be 1: we got %d\n", status);
	idx = key_index((const unsigned char *)sss, ht->size);
	printf("key: %s\n", ht->array[idx]->key);
	status = hash_table_set(ht, "neurospora", "value4");
	printf("exited status for collision should be 1: we got %d\n", status);
	idx = key_index((const unsigned char *)ssss, ht->size);
	printf("key: %s\n", ht->array[idx]->key);

	return (EXIT_SUCCESS);
}
