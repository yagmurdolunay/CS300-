#pragma once
#ifndef AVLSearchTree_H
#define AVLSearchTree_H
template <class Key, class Value>
class AVLSearchTree
{
private:
	// difference between BST is that the height difference between
	//  the left and right sub tree should be; h= 1, -1 or 0
    struct Node {
        Key key;
        Value value;
        Node* left;
        Node* right;
        int height;
        Node(const Key& _key, const Value& _value) : key(_key), value(_value), left(NULL), right(NULL), height(0) {}
        //initialize height as 0 to handle the base case of an empty subtree.
    };
    Node* root;
    const Node ITEM_NOT_FOUND;

    //part of the internal workings of the AVL tree 
    int getHeight(Node* node);
    int getBalanceFactor(Node* node);
    Node* rotateRight(Node* y);
    Node* rotateLeft(Node* x);
    Node* balance(Node* node);
    Node* insert(Node* node, const K& key, const V& value);
    void inOrderTraversal(Node* node);
public:
    AVLSearchTree(const Node& notFound);
    ~AVLSearchTree();
    void insert(const K& key, const V& value);
    void printInOrder();
    //remove yap gerekli
};
#include "AVLSearchTree.cpp"
#endif // AVLSearchTree_H


