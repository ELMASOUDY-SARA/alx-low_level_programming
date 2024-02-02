#include <stdlib.h>
#include <stdio.h> // Include for printf
#include "hash_tables.h"

/**
 *  * hash_table_create - Creates a hash table
 *   * @size: The size of the array
 *    *
 *     * Return: A pointer to the newly created hash table, or NULL if it fails
 *      */
hash_table_t *hash_table_create(unsigned long int size)
{
	    hash_table_t *new_table;
	        unsigned long int i;

		    new_table = malloc(sizeof(hash_table_t));
		        if (new_table == NULL)
				    {
					            perror("Error creating hash table");
						            return (NULL);
							        }

			    new_table->size = size;
			        new_table->array = malloc(sizeof(hash_node_t *) * size);
				    if (new_table->array == NULL)
					        {
							        perror("Error creating hash array");
								        free(new_table); // Free previously allocated memory
									        return (NULL);
										    }

				        for (i = 0; i < size; i++)
						        new_table->array[i] = NULL;

					    printf("Hash table created successfully\n");

					        return (new_table);
}

