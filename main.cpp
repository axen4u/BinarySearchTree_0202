#include <iostream>
#include <string>
using namespace std;



class Node
{
    public:
    string info;
    Node* leftchild;
    Node* rightchild;

    // constructor fore the node class
    Node(string i, Node* l, Node*r)
    {
        info = i;
        leftchild =l;
        rightchild = r;
    }

};
class BinaryTree
{
    public:
    Node*Root;

    BinaryTree()
    {
        Root = nullptr; // initializing Root to null
    }

    void insert(string element) // insert a node in the binary serach tree
    {
        Node* newNode = new Node(element, nullptr, nullptr); // allocate memory for the new node
        newNode->info = element; // assign value to the data field of the new node
        newNode->leftchild =nullptr; // Make the left child of the new node point to null
        newNode->rightchild =nullptr; // make the right child of the new node point to null

        Node*parent = nullptr;
        Node*currentNode = nullptr;
        search(element, parent, currentnode); // Locate the node wich be the parent of the node to be ins

        if(parent == nullptr) // if the parent is Null (tree is empty)
    }
};