#ifndef HUFFMAN_NODE_H
#define HUFFMAN_NODE_H

#include <map> 
#include <vector>
#include <deque>


#include <iostream>
#include <string>
using namespace std;

class Node{

private:
	//Data members
    char character;
    int frequency;
    Node* left;
    Node* right;

	
public:
	//Member functions
    Node(Node* left, Node* right);
    Node(char character);
    ~Node(); 
    bool isLeaf();
    int getFrequency();
    char getSymbol();
    Node* getLeft();
    Node* getRight();
    void setSymbol(char c);
    void incrementFrequency();
    void incrementFrequency(int value);
    void FillEncondedTable(map<char,string> *table,string bitsValue);
    void showTree();
};







#endif //HUFFMAN_NODE_H
