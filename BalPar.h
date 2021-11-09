#ifndef BALPAR_H
#define BALPAR_H

#include <string>
using namespace std;

class EmptyException{};

class BalPar {
private:
	struct node {
		char nodeChar;
		node* next;
	};
	node* head = new node;
public: 
	BalPar();
	void push(char a);
	char pop();
	bool isBalanced(string s);
};



#endif