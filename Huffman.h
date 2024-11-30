#pragma once
#include "Node.h"

class Huffman
{
private:
    Node* root;
    string array [256];
        
    void generateCodes(Node*, string);
public:
    Huffman();

    void buildTree(const string&);
    string encode(string);
    string decode(string);

    void displayCodes();

};