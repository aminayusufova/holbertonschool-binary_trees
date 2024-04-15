#ifndef BINTREE
#define BINTREE

#include <stdlib.h>

#include <stddef.h>
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: int stored in the node
 * @parent: pointer to the parent node
 * @left: ptr to the left child node
 * @right: ptr to the right child node
 */
struct binary_tree_s
{
	 int n;
	 struct binary_tree_s *parent;
	 struct binary_tree_s *left;
	 struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;


typedef struct binary_tree_s bst_t;

typedef struct binary_tree_s avl_t;

typedef struct binary_tree_s heap_t;


/**
 * struct queue - simple queue
 *
 * @node: is value
 * @next: is next node in the queue
 */
struct queue
{
	binary_tree_t *node;
	struct queue *next;
};

typedef  struct queue queue;

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);
void binary_tree_delete(binary_tree_t *tree);
size_t binary_tree_depth(const binary_tree_t *tree);
size_t binary_tree_size(const binary_tree_t *tree);
#endif
