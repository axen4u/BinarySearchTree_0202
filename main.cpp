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
        
    }
};