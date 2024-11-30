#include "Huffman.h"


//----------------------Node.h-------------------

Node::Node(char ch, int freq)
{
	this->ch = ch;
	this->freq = freq;
	this->left = NULL;
	this->right = NULL;
}

char Node::getChar() 
{
	return ch; 
}

int Node::getFreq() 
{ 
	return freq;
}

Node* Node::getLeft()
{
	return left;
}

Node* Node::getRight()
{
	return right;
}

void Node::setChar(char ch) 
{ 
	this->ch = ch;
}

void Node::setFreq(int freq) 
{
	this->freq = freq; 
}

void Node::setLeft(Node* left) 
{
	this->left = left; 
}

void Node::setRight(Node* right) 
{
	this->right = right; 
}
