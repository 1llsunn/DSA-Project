#pragma once
#include <iostream>
#include <string>

using namespace std;

class Node 
{
private:
    char ch;         
    int freq;         
    Node* left;       
    Node* right;

public:
    Node (char, int);

    char getChar();
    int getFreq();
    Node* getLeft();
    Node* getRight();

    void setChar(char);
    void setFreq(int);
    void setLeft(Node*);
    void setRight(Node*);
};
