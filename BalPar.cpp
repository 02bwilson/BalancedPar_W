#include "BalPar.h"

using namespace std; 

BalPar::BalPar() {
	head = nullptr;
}

void BalPar::push(char a) {
	node* newNode = new node;
	newNode->nodeChar = a;

	if (!head) {
		head = newNode;
		head->next = nullptr; 
	}
	else {
		newNode->next = head; 
		head = newNode;
	}
}

char BalPar::pop() {
	char res;
	node* nextNode = new node; 
	if (!head) {
		throw EmptyException();
	}
	else { 
		res = head->nodeChar;
		nextNode = head->next; 
		head = nextNode;
	}
	return res;
}

bool BalPar::isBalanced(string s) {
	bool balanced = true;
	bool firstBrack = true;
	int i = 0;
	
	while (i < s.length()) { 
		if (firstBrack && (s.at(i) == ')' || s.at(i) == '}' || s.at(i) == ']')) {
			return false;
		}
		if (s.at(i) == '(' || s.at(i) == '{' || s.at(i) == '[') {
			push(s.at(i));
			firstBrack = false;
		}

		if (head) {
			if (s.at(i) == '}' && head->nodeChar == '{') {
				pop();
			}
			if (s.at(i) == ']' && head->nodeChar == '[') {
				pop();
			}
			if (s.at(i) == ')' && head->nodeChar == '(') {
				pop();
			}
			
		}
		i++;
	}
	
	
	if (head) {
		balanced = false;
	}
	

	return balanced;
	
}