#include "AVLSearchTree.h"

using namespace std;

/**
		 * Construct the tree.
		 */

template <class Key, class Value>
AVLSearchTree <Key, Value> ::AVLSearchTree(const Node& notFound):ITEM_NOT_FOUND(notFound), root(NULL){}

/**
         * Internal method to get element field in node t.
         * Return the element field or ITEM_NOT_FOUND if t is NULL.
         */


