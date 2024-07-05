#ifndef HUFFMAN_HUFFMAN_H
#define HUFFMAN_HUFFMAN_H

#include "Node.h"
#include <string>
#include <queue> 
#include <map>
#include <vector>
#include "FileIO.h"

#include <iostream>
using namespace std;


struct node_cmp // structure with name node_cmp
{
	
    bool operator()(Node* a, Node* b ) const
    {
        return a->getFrequency() >= b->getFrequency();
    }
};


typedef priority_queue<Node*,vector<Node*>,node_cmp> FrequencyQueue;


class HuffmanCompressor{

private:
    Node *root;
    FrequencyQueue createFrequencyTable(char *content,int size);
    void serialize(Node *node, deque<int> *frequencies, deque<char> *symbols );
    Node* deserialize(deque<int> *frequencies, deque<char> *symbols);
    Node* createBinaryTree(FrequencyQueue queue);
    map<char,string> createEncodedMap();

public:
    bool encodeFile(string inputFile,string outputFilePath);
    bool decodeFile(string inputFile,string outputFilePath);

};



#endif //HUFFMAN_HUFFMAN_H
