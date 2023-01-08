0x1A. C - Hash tables

General

1. What is a hash function
2. What makes a good hash function
3. What is a hash table, how do they work and how to use them
4. What is a collision and what are the main ways of dealing with collisions in the context of a hash table
5. What are the advantages and drawbacks of using hash tables
6. What are the most common use cases of hash tables

Requirements

General

1. Allowed editors: vi, vim, emacs
2. All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
3. All your files should end with a new line
4. A README.md file, at the root of the folder of the project is mandatory
5. Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
6. You are not allowed to use global variables
7. No more than 5 functions per file
8. You are allowed to use the C standard library
9. The prototypes of all your functions should be included in your header file called hash_tables.h
10. Don’t forget to push your header file
11. All your header files should be include guarded


Task 0

Write a function that creates a hash table.

Prototype: hash_table_t *hash_table_create(unsigned long int size);
where size is the size of the array
Returns a pointer to the newly created hash table
If something went wrong, your function should return NULL


Task 1

Write a hash function implementing the djb2 algorithm.

Prototype: unsigned long int hash_djb2(const unsigned char *str);
You are allowed to copy and paste the function from this page


Task 2

Write a function that gives you the index of a key.

Prototype: unsigned long int key_index(const unsigned char *key, unsigned long int size);
where key is the key
and size is the size of the array of the hash table
This function should use the hash_djb2 function that you wrote earlier
Returns the index at which the key/value pair should be stored in the array of the hash table
You will have to use this hash function for all the next tasks


Task 3

Write a function that adds an element to the hash table.

Prototype: int hash_table_set(hash_table_t *ht, const char *key, const char *value);
Where ht is the hash table you want to add or update the key/value to
key is the key. key can not be an empty string
and value is the value associated with the key. value must be duplicated. value can be an empty string
Returns: 1 if it succeeded, 0 otherwise
In case of collision, add the new node at the beginning of the list


Task 4


Write a function that retrieves a value associated with a key.

Prototype: char *hash_table_get(const hash_table_t *ht, const char *key);
where ht is the hash table you want to look into
and key is the key you are looking for
Returns the value associated with the element, or NULL if key couldn’t be found


Task 5

Write a function that prints a hash table.

Prototype: void hash_table_print(const hash_table_t *ht);
where ht is the hash table
You should print the key/value in the order that they appear in the array of hash table
Order: array, list
Format: see example
If ht is NULL, don’t print anything


Task 6

Write a function that deletes a hash table.

Prototype: void hash_table_delete(hash_table_t *ht);
where ht is the hash table


