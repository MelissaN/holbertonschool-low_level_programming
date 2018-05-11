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
	char *value;

	ht = hash_table_create(1024);
	hash_table_set(ht, "c", "fun1");
	hash_table_set(ht, "hetairas", "collision1");
	hash_table_set(ht, "mentioner", "collision2");
	hash_table_set(ht, "python", "awesome");
	hash_table_set(ht, "Jennie", "and Jay love asm");
	hash_table_set(ht, "N", "queens");
	hash_table_set(ht, "Asterix", "Obelix");
	hash_table_set(ht, "Betty", "Holberton");
	hash_table_set(ht, "98", "Battery Street");
	hash_table_set(ht, "c", "isfun");

	/* test collision to see if linked list is iterated */
	value = hash_table_get(ht, "hetairas");
	printf("%s:%s\n", "hetairas", value);
	value = hash_table_get(ht, "mentioner");
	printf("%s:%s\n", "mentioner", value);

	value = hash_table_get(ht, "python");
	printf("%s:%s\n", "python", value);
	value = hash_table_get(ht, "Jennie");
	printf("%s:%s\n", "Jennie", value);
	value = hash_table_get(ht, "N");
	printf("%s:%s\n", "N", value);
	value = hash_table_get(ht, "Asterix");
	printf("%s:%s\n", "Asterix", value);
	value = hash_table_get(ht, "Betty");
	printf("%s:%s\n", "Betty", value);
	value = hash_table_get(ht, "98");
	printf("%s:%s\n", "98", value);
	value = hash_table_get(ht, "c");
	printf("%s:%s\n", "c", value); /* prints updated value */
	value = hash_table_get(ht, "javascript");
	printf("%s:%s\n", "javascript", value); /* prints null */
	return (EXIT_SUCCESS);
}
